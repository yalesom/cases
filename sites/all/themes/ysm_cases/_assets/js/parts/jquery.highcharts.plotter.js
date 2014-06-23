var highchartColors = [
	'#00457c', // dark blue 
	'#c9b579', // light brown
	'#3775a4', // medium blue
	'#bf6f6f', // pale red
	'#42889b', // greenish blue
	'#b242ae', // purple
	'#79ba86', // green
	'#5d94be', // light blue
	'#eee256' // yellow
],
	chartContainer 	= '';

/**
 * This reads the CSV and calls the correct parser based on the chart type
 *
 * @name	readInChartCSV
 * @params	none
 */
function readInChartCSV() {
	var $ = jQuery;
	
	$.ajax({
		url: chartContainer.data('src'),
		type: 'get',
		dataType: 'text',
		success: function(result) {
			var parseResult = $.parse(result,{header: false, dynamicTyping: true})
			console.info(parseResult);
			var chartArray = parseResult.results;

			$('#chart-data').html(result);

			switch(chartContainer.data('charttype')) {
				case 'line': case 'bar': case 'column':
					genericChartParser(chartArray, chartContainer);
				break;

				case 'pie':
					pieChartParser(chartArray, chartContainer);
				break;

				case 'stock':
					stockChartParser(chartArray, chartContainer);
				break;
			};
		},
		error: function(error) {
			console.log(error.status + ' ' + error.statusText)
		}
	});
}

/**
 * This converts any readable date into a unix based time code
 *
 * @name	convertDate
 * @param 	date
 */
function convertDate(passedDate) {
	//see if the date is in string format or shitty Excel fake epoch date (days since Jan 1, 19)
	if (passedDate.toString().indexOf("/") > -1 ) {
		// converts the passed date string into an array
		var dateArray 	= passedDate.split('/'),
		// convert a date into a UTC date
		utcDate 	= new Date(Date.UTC(dateArray[2], dateArray[0]-1, dateArray[1]));
	} else {
		// this is a SHIT Excel date and we have to make a real date out of it
		utcDate 	= ExcelDateToJSDate(passedDate);
	}
	

	// returns the converted date into the unix time code
	return parseFloat(utcDate.getTime() / 1000.0 + '000');
}

function ExcelDateToJSDate(serial) {
	 var utc_days  = Math.floor(serial - 25569);
	 var utc_value = utc_days * 86400;                                        
	 var date_info = new Date(utc_value * 1000);

	 var fractional_day = serial - Math.floor(serial) + 0.0000001;

	 var total_seconds = Math.floor(86400 * fractional_day);

	 var seconds = total_seconds % 60;

	 total_seconds -= seconds;

	 var hours = Math.floor(total_seconds / (60 * 60));
	 var minutes = Math.floor(total_seconds / 60) % 60;

	 return new Date(date_info.getFullYear(), date_info.getMonth(), date_info.getDate(), hours, minutes, seconds);
}

/**
 * This converts any string into a lower case hyphenated string.
 *
 * @name	convertStringToID
 * @param 	theString
 */
function convertStringToID(theString) {
	return theString.toLowerCase().replace(/\s+/g, '-');
}

/**
 * ===================================================================================
 * GENERIC CHART FUNCTIONS
 * =================================================================================== */

/**
 * Parses an array needed for generic charts (line, bar, column)
 *
 * @name	genericChartParser
 * @param	chartArray
 */
function genericChartParser(chartArray) {
	var $ 					= jQuery,
		chartOptions		= {},
		categories 			= chartArray[0],
		series 				= [],
			seriesData		= [],
			seriesCoutner	= 0;
	
	// loop through chartArray starting at the 2nd index
	// this is because we already got the categories into it's own array
	for (var o = 1; o < chartArray.length; o++) {
		// clear the series data
		seriesData = [];

		// add the name of the series to the current object
		series[seriesCoutner] = {
			name: chartArray[o][0]
		};

		// loop through the categories starting at the 2nd index
		// because the first index is a "category" label, which we don't need
		for (var i = 1; i < categories.length; i++) {
			// convert the string value to a number (float) 
			// and add it the current seriesData index
			seriesData[i-1] = parseFloat(chartArray[o][i]);
		};

		// update the series with seriesData
		series[seriesCoutner].data = seriesData;

		// update the series counter for the next series
		seriesCoutner++;
	};

	// add the categories to the chartOptions
	// we take off the first index because it's not needed
	chartOptions.categories = categories.slice(1);

	// add the series to the chartOptions
	chartOptions.series 	= series;

	// call function to show the chart
	genericChartPlotter(chartOptions, chartContainer);
}
/**
 * Creates a generic chart (line, bar or column)
 *
 * @name	genericChartPlotter
 * @param	chartOptions
 */
function genericChartPlotter(chartOptions) {
	var options = chartContainer.data();

	chartContainer.highcharts({
		chart: {
			type: options.charttype
		},
		title: {
			text: options.title
		},
		subtitle: {
			text: options.subtitle
		},
		xAxis: {
			categories: chartOptions.categories
		},
		yAxis: {
			title: {
				text: options.yaxis
			}
		},
		tooltip: {
			enabled: options.showtooltip,
			valueSuffix: options.tooltipvalue
		},
		legend: {
			enabled: options.showlegend,
			layout: 'vertical',
			align: 'right',
			verticalAlign: 'middle',
			borderWidth: 0
		},
		plotOptions: {
			line: {
				dataLabels: {
					enabled: options.showdatalabels
				},
				enableMouseTracking: options.enablemousetracking
			},
			column: {
				stacking: (options.stackvalues === true) ? 'normal' : '',
				dataLabels: {
					enabled: options.showdatalabels,
					color: (options.stackvalues === true) ? 'white' : (Highcharts.theme && Highcharts.theme.dataLabelsColor)
				},
				enableMouseTracking: options.enablemousetracking
			},
			bar: {
				stacking: (options.stackvalues === true) ? 'normal' : '',
				dataLabels: {
					enabled: options.showdatalabels,
					color: (options.stackvalues === true) ? 'white' : (Highcharts.theme && Highcharts.theme.dataLabelsColor)
				},
				enableMouseTracking: options.enablemousetracking
			}
		},
		colors: highchartColors,
		series: chartOptions.series
	});
}

/**
 * ===================================================================================
 * PIE CHART FUNCTIONS
 * =================================================================================== */

/**
 * Parses an array needed for the pie charts
 *
 * @name	pieChartParser
 * @param	chartArray
 */
function pieChartParser(chartArray) {
	var $ 				= jQuery,
		seriesData		= [];

	// loop through chartArray
	for (var i = 0; i < chartArray.length; i++) {
		// add the current array to the seriesData
		seriesData[i] = [
			chartArray[i][0],
			// convert the string value to a number (float) 
			parseFloat(chartArray[i][1])
		];
	};

	// call function to show the chart
	pieChartPlotter(seriesData, chartContainer);
}
/**
 * Creates a pie chart
 *
 * @name	pieChartPlotter
 * @param	seriesData
 */
function pieChartPlotter(seriesData) {
	var options = chartContainer.data();

	chartContainer.highcharts({
		chart: {
			plotBackgroundColor: null,
			plotBorderWidth: null,
			plotShadow: false
		},
		title: {
			text: options.title
		},
		subtitle: {
			text: options.subtitle
		},
		tooltip: {
			enabled: options.showtooltip,
			pointFormat: '{series.name}: <b>{point.percentage:.1f}%</b>'
		},
		plotOptions: {
			pie: {
				allowPointSelect: options.enablesliceclick,
				cursor: 'pointer',
				dataLabels: {
					enabled: options.showdatalabels,
					color: '#000000',
					connectorColor: '#000000',
					format: '<b>{point.name}</b>: {point.percentage:.1f} %'
				},
				showInLegend: options.showlegend
			}
		},
		series: [{
			type: 'pie',
			data: seriesData
		}]
	});
}

/**
 * ===================================================================================
 * STOCK CHART FUNCTIONS
 * =================================================================================== */

/**
 * Parses an array needed for stock charts
 *
 * @name	stockChartParser
 * @param	chartArray
 */
function stockChartParser(chartArray) {
	var $ 					= jQuery,
		dates 				= chartArray[0],
		// an array of series objects
		seriesOptions		= [],
			// the data in each series
			seriesData		= [],
			// the counter for series options
			seriesCounter	= 0;

	// loop through chartArray starting at the 2nd index
	// this is because we've already got the dates into it's own array
	for (var o = 1; o < chartArray.length; o++) {
		// clear the series data
		seriesData = [];

		// add the series and ID to the current series object
		seriesOptions[seriesCounter] = {
			name: chartArray[o][0],
			id: chartArray[o][0].toLowerCase().replace(/\s+/g, '-')
		};

		// loop through the dates starting at the 2nd index
		// because the first index is a "dates" label, which we don't need
		for (var i = 1; i < dates.length; i++) {
			// add the date and value pair to current seriesData array index
			seriesData[i-1] = [
				// call function to convert the readable date to unix time code
				convertDate(dates[i]),
				// conver the string value to a number (float)
				parseFloat(chartArray[o][i])
			];
		};

		// add the seriesData to the current series object
		seriesOptions[seriesCounter].data = seriesData;

		// update the series counter for the next series
		seriesCounter++;
	};

	if ($('#flags').length) {
		// parses the JSON string into an object
		flags = JSON.parse('[' + $('#flags').html() + ']');

		// loop through the new object
		$.each(flags, function(index, value) {
			// call function to convert the series name
			value.onSeries	= convertStringToID(value.onSeries);
			
			$.each(flags[index].data, function(index, value) {
				// parse the "x" value into a number and add 3 zeros
				value.x		= parseInt(value.x + '000');
			});
		});
		
		seriesOptions = seriesOptions.concat(flags);
	}

	// call function to show the chart
	stockChartPlotter(seriesOptions, chartContainer);
}
/**
 * This takes the seriesOptions and creates the chart
 *
 * @name	plotStockChart
 * @param 	seriesOptions
 */
function stockChartPlotter(seriesOptions) {
	var options = chartContainer.data();

	chartContainer.highcharts('StockChart', {
		title: {
			text: options.title
		},
		subtitle: {
			text: options.subtitle
		},
		rangeSelector: {
			selected: 5
		},
		tooltip: {
			valueDecimals: 2
		},
		series: seriesOptions
	});
};