var dateObj	= new Date(),
	
	// required dependencies
	gulp = require('gulp'),
	plugins = require('gulp-load-plugins')({
		lazy: false,
		pattern: ['*']
	}),
	pkg = require('./package.json');

require('shelljs/global');

module.exports = {
	pkg: pkg,
	dir: {
		distribution: 'distribution',
		source: 'src',
	},
	getBuildDate: function() {
		dateObj.setTimeToNow();
		return dateObj.toFormat('YYYY-MM-DD | HH24MISS');
	},
	banner: [
		'/**',
		' * @name: <%= pkg.name %>',
		' * @description: <%= pkg.description %>',
		' * @version: <%= pkg.version %>',
		' * @build: <%= pkg.build %>',
		' * @author: <%= pkg.author %>',
		' * @client: <%= pkg.client %>',
		' */',
		'\n'
	].join('\n')
};

// 
getTask = function(task) {
    return require('./gulp-tasks/' + task)(gulp, plugins);
}

// get all setup tasks
getTask('setup');

// get all styles tasks
getTask('styles');

// get all scripts tasks
getTask('scripts');

// 
// default task
gulp.task('default', function() {
	var tasks = [];

	if (!pkg.setupComplete) {
		tasks.push('gulp setup - Setup your project.');

	} else if (pkg.setupComplete) {
		tasks.push('gulp watch - Continuously watch for changes to your CSS and JS during development.');
		tasks.push('gulp build - Build a production release of your CSS and JS.');
	}
		
	var task = plugins.readlineSync.keyInSelect(tasks, 'What would you like to do?: ');

	if (task > -1) {
		exec(tasks[task].split(' - ')[0]);
	}
});

gulp.task('watch', [
	'styles:compile',
	'scripts:compile',
	], function() {
		var sourceDirectory = module.exports.dir.source;

		gulp.watch(sourceDirectory + '/scss/**/*.scss', ['styles:compile']);
		gulp.watch(sourceDirectory + '/js/**/*.js', ['scripts:compile']);
	}
);

gulp.task('build', function() {
	exec('gulp styles:compile --production');
	exec('gulp scripts:compile --production');

	console.log('\n*************************\nProduction files created!\n*************************\n');
})

