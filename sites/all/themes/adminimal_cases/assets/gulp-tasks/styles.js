module.exports = function(gulp, plugins) {
	var sourceDirectory			= module.parent.exports.dir.source,
		distributionDirectory	= module.parent.exports.dir.distribution,

		buildDate = module.parent.exports.getBuildDate(),
		pkg	= module.parent.exports.pkg,
		banner = module.parent.exports.banner,

		// required dependencies
		argv = require('yargs').argv;
	
	// remove css files
	gulp.task('styles:clean', function() {
		plugins.del([distributionDirectory + '/css/*.css']);

		return;
	});

	// complie all SCSS into single CSS file
	gulp.task('styles:compile', [
		'styles:clean'
		], function() {
			pkg.build = buildDate;

			gulp.src(sourceDirectory + '/scss/*app.scss')
				.pipe(plugins.plumber({
					errorHandler: plugins.notify.onError({
						title: 'Error',
						message: '<%= error.message %>',
						sound: 'default'
					})
				}))
				
				.pipe(plugins.sourcemaps.init())

				.pipe(plugins.sass({
					sourceComments: function() {
						return (argv.production !== undefined) ? true : false;
					}	
				}).on('error', function(e) {
					return;
				}))
				
				.pipe(plugins.if(argv.production !== undefined, plugins.cssnano()))
				
				.pipe(plugins.header(banner, { pkg: pkg }))
				
				.pipe(plugins.rename({
					suffix: '.min'
				}))

				.pipe(plugins.autoprefixer({
					browsers: ['last 2 versions']
				}))
				
				.pipe(plugins.sourcemaps.write('.'))

				.pipe(gulp.dest(distributionDirectory + '/css'))
				
				.pipe(plugins.notify({
					title: 'Success',
					message: 'Compiled "<%= file.relative %>"',
					sound: 'default' 
				}));

			return;
		}
	);
};