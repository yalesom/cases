var gulp = require('gulp');
var gutil = require('gulp-util');
var pkg = require('./package.json');

var notify = require('gulp-notify');
var rimraf = require('gulp-rimraf');

var compass = require('gulp-compass'), path = require('path');

var sass = require('gulp-ruby-sass');
var rename = require('gulp-rename');
var include = require('gulp-include');
var minifyCSS = require('gulp-minify-css');
var cssshrink = require('gulp-cssshrink');
var stripDebug = require('gulp-strip-debug');
var gulpif = require('gulp-if');
var header = require('gulp-header');
require('date-utils');

module.exports = gulp;

var banner = ['/**',
	' * <%= pkg.name %> - <%= pkg.description %>',
	' * @version <%= pkg.version %>',
	' * @build <%= pkg.build %>',
	' * @author <%= pkg.author %>',
	' * @client <%= pkg.client %>',
	' */',
	''].join('\n');

var dateObj = new Date();

getMeDate = function(){
	dateObj.setTimeToNow();
	return dateObj.toFormat("YYYY-MM-DD | HH24MISS");
}

//	Tasks   ==================================================

gulp.task('styles',function() {
	pkg.build = getMeDate();
	return gulp.src('_src/scss/gnam_cases.scss')
		.pipe(compass({
			project: path.join(__dirname,"."),
			//config_file: 'config.rb',
			css: '_src/css',
			sass: '_src/scss',
			comments: function(){
				return (pkg.environment == 'production') ? false : true;
			},
			environment: pkg.environment,
		}))
		.pipe(gulpif(pkg.environment == 'production', minifyCSS({keepSpecialComments: 0})))
		.pipe(header(banner, {pkg: pkg}))
		.pipe(rename({
			suffix: ".min"
		}))
		.pipe(gulp.dest('css'))
		.pipe(notify({ message: 'SCSS file: <%= file.relative %> compiled, Master'}));
});

gulp.task('scripts',function() {
	pkg.build = getMeDate();
	return gulp.src('_src/js/*.app.js')
	.pipe(include())
	.pipe(gulpif(pkg.environment == 'production', stripDebug()))
	.pipe(header(banner, {pkg: pkg}))
	.pipe(rename({
		suffix: ".ck"
	}))
	.pipe(gulp.dest("js"))
	.pipe(notify({message: 'Script file: <%= file.relative %> compiled, sir!'}));
})

gulp.task('cleanCSS', function(){
	return gulp.src(['css/gnam*.css'],{read: false}).pipe(rimraf());
});
gulp.task('cleanJS', function(){
	return gulp.src(['js/gnam_cases.*.js'],{read: false}).pipe(rimraf());
});

gulp.task('default', function() {
	gulp.watch('_src/scss/**/*.scss', ['cleanCSS','styles']);
	gulp.watch(['_src/js/*.app.js','_src/js/parts/**/*.js'],['cleanJS','scripts']);
});