module.exports = function(gulp, plugins) {
	var sourceDirectory			= module.parent.exports.dir.source,
		distributionDirectory	= module.parent.exports.dir.distribution,
		
		buildDate = module.parent.exports.getBuildDate(),
		pkg	= module.parent.exports.pkg,
		banner = module.parent.exports.banner,
		
		// required dependencies
		argv = require('yargs').argv;
	
	// remove js files
	gulp.task('scripts:clean', function() {
		plugins.del([distributionDirectory + '/js/*.js']);

		return;
	});

	// complie all SCSS into single CSS file
	gulp.task('scripts:compile', [
		'scripts:clean'
		], function() {
			pkg.build = buildDate;

			gulp.src(sourceDirectory + '/js/*app.js')
				.pipe(plugins.plumber({
					errorHandler: plugins.notify.onError({
						title: 'Error',
						message: '<%= error.message %>',
						sound: 'default'
					})
				}))
				
				.pipe(plugins.include())
				
				.pipe(plugins.if(argv.production !== undefined, plugins.stripDebug()))
				
				.pipe(plugins.if(argv.production !== undefined, plugins.uglify()))
				
				.pipe(plugins.header(banner, {
					pkg: pkg
				}))
				
				.pipe(plugins.rename({
					suffix: '.min'
				}))
				
				.pipe(gulp.dest(distributionDirectory + '/js'))
				
				.pipe(plugins.notify({
					title: 'Success',
					message: 'Compiled "<%= file.relative %>"',
					sound: 'default'
				}));

			return;
		}
	);
};