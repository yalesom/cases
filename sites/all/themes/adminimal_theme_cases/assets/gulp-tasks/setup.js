module.exports = function(gulp, plugins) {
	var shelljs	= require('shelljs/global'),
		readlineSync = require('readline-sync'),
		argv = require('yargs').argv,
		
		sourceDirectory	= module.parent.exports.dir.source,

		// check to see the if the setupComplete key is set to "true" 
		setupComplete = module.parent.exports.pkg.setupComplete,

		// in order to be a valid project directory this file
		// needs to sit inside an assets or includes directory
		projectDirectoryIsValid = (/(assets|includes)/.test(pwd())) ? true : false,
		
		// if the project directory is valid, we need to update the *.json devDependencies
		saveDependencyFlag = (projectDirectoryIsValid) ? '-D' : '',

		// original styles and scripts files
		originalStylesFile = sourceDirectory + '/scss/styles.app.scss',
		originalScriptsFile	= sourceDirectory + '/js/scripts.app.js',
		originalVendorsFile = sourceDirectory + '/js/vendors.app.js';

	/**
	 * Kicks off the setup of a project
	 */
	gulp.task('setup', [
		'setup:banner',
		'setup:npm-install',
		'setup:npm-update',
		'setup:bower',
		'setup:drupal',
		'setup:angular',
		'setup:fontAwesome',
		'setup:susy',
		'setup:jQueryMigrate',
		'setup:projectName',
		'setup:complete'
	]);

	gulp.task('setup:banner', function() {
		console.log('\n   _____                            _____ _____ ____');
		console.log('  / ___/____  __  ______  ________ |__  // ___// __ \\');
		console.log('  \\__ \\/ __ `/ / / / __ `/ ___/ _ \\ /_ </ __ \\/ / / /');
		console.log(' ___/ / /_/ / /_/ / /_/ / /  /  __/__/ / /_/ / /_/ /');
		console.log('/____/\\__, /\\__,_/\\__,_/_/   \\___/____/\\____/\\____/');
		console.log('        /_/ www.square360.com\n');

		return true;
	});

	gulp.task('setup:npm-install', function() {
		if (!setupComplete) {
			console.log('\nInstalling Node.js dependencies, please wait.\n');

			// install npm dependencies 
			exec('npm install \
					date-utils \
					del \
					gulp-cssnano \
					gulp-header \
					gulp-if \
					gulp-include \
					gulp-notify \
					gulp-plumber \
					gulp-rename \
					gulp-sass \
					gulp-strip-debug \
					gulp-sourcemaps \
					gulp-autoprefixer \
				    gulp-uglify ' + 
				    saveDependencyFlag
			);
		}
	});

	/**
	 * Downloads the latest NPM dependencies required for the Gulp tasks to run
	 */
	gulp.task('setup:npm-update', function() {
		if (!setupComplete) {
			console.log('\nUpdated Node.js dependencies, please wait.\n');

			// update npm dependencies 
			exec('npm update -D');
		}

		return;
	});

	/**
	 * Downloads the latest Bower libraries (in bower.json file)
	 */
	gulp.task('setup:bower', function() {
		console.log('\nDownloading required bower libraries, please wait.\n');

		// install bower libraries
		exec('bower install');

		return;
	});

	/**
	 * Ask if project needs the jQuery Migrate library
	 */
	gulp.task('setup:jQueryMigrate', function() {
		var useJqueryMigrate = readlineSync.keyInYNStrict('\nDo you need the jQuery Migrate plugin?: ');
	
		if (useJqueryMigrate) {
			console.log('\nDownloading the jQuery Migrate library, please wait.\n');
				
			exec('bower install ' + saveDependencyFlag + ' jquery-migrate');
		}

		if (projectDirectoryIsValid) {
			sed('-i', 
			'//[jquery_migrate_lib]', 
			(useJqueryMigrate) ? '//= require "../../bower_components/jquery-migrate/jquery-migrate.js"' : '', 
			originalVendorsFile);
		}

		return;
	});

	/**
	 * Ask if project needs the FontAwesome library
	 */
	gulp.task('setup:fontAwesome', function() {
		var useFontAwesome = readlineSync.keyInYNStrict('\nDo you need the FontAwesome library?: ');

		if (useFontAwesome) {
			console.log('\nDownloading the FontAwesome library, please wait.\n');

			exec('bower install ' + saveDependencyFlag + ' font-awesome');
		}

		if (projectDirectoryIsValid) {
			sed('-i', 
			'//[font_awesome_lib]', 
			(useFontAwesome) ? '@import "../../bower_components/font-awesome/scss/font-awesome";' : '',
			originalStylesFile);
		}

		return;
	});

	/**
	 * Ask if this is a Drupal project
	 */
	gulp.task('setup:drupal', function() {
		var useDrupal = readlineSync.keyInYNStrict('\nIs this a Drupal project?: ');

		if (useDrupal) {
			console.log('\nCreating Drupal folders, please wait.\n');
			
			exec('mkdir -p ../tpl/{core,fields,nodes,pages,taxonomy,views}');
		}

		return;
	});

	/**
	 * Ask if project is using AngularJS
	 */
	gulp.task('setup:angular', function() {
		var useAngular = readlineSync.keyInYNStrict('\nAre you going to using AngularJS in your project?: ');
		
		if (useAngular) {
			console.log('\nSetting up AngularJS, please wait.\n');
				
			exec('bower install ' + saveDependencyFlag + ' \
				angular-ui-router \
				angular-animate;');

			exec('mkdir -p ' + sourceDirectory + '/js/angular/{controllers,directives,factories,filters}');
		}
		
		if (projectDirectoryIsValid) {
			sed('-i', 
				'//[angular_lib]', 
				(useAngular) ?
					[
					'//= require "../../bower_components/angular-animate/angular-animate.js"',
					'//= require "../../bower_components/angular-ui-router/release/angular-ui-router.js"'
					].join('\n') : 
					'',
				originalVendorsFile);

			sed('-i',
				'//[angular_directories]',
				(useAngular) ?
					[
					'//',
					'// !----- Import AngularJS Controllers -----',
					'//= require "angular/controllers/";',
					'',
					'//',
					'// !----- Import AngularJS Directives -----',
					'//= require "angular/directives/";',
					'',
					'//',
					'// !----- Import AngularJS Factories -----',
					'//= require "angular/factories/";',
					'',
					'//',
					'// !----- Import AngularJS Filters -----',
					'//= require "angular/filters/";',
					].join('\n') :
					'',
				originalScriptsFile);
		}

		return;
	});

	/**
	 * Ask if project needs Susy
	 */
	gulp.task('setup:susy', function() {
		var useSusy = readlineSync.keyInYNStrict('\nDo you need the Susy grids library?: ');
		
		if (useSusy) {
			console.log('\nSetting up Susy, please wait.\n');
				
			exec('bower install ' + saveDependencyFlag + ' susy');
		}

		if (projectDirectoryIsValid) {
			sed('-i', 
				'//[susy_lib]', 
				(useSusy) ? '@import "../../bower_components/susy/sass/_susy";' : '',
				originalStylesFile);
		}
	});

	/**
	 * Asks to name the project
	 */
	gulp.task('setup:projectName', function() {
		if (!setupComplete) {
			var projectNameNoSpaces,
				projectNameWD,
				projectName = readlineSync.question('\nWhat is the name of your project?: ', {
					limit: function(input) {
						return /^((?!_){1}\w+( +\w+)*){5,214}$/.test(input);
					},
					limitMessage: 'Project name must be a min of 5 characters and can\'t start with . or _'
				}),
				clientName = readlineSync.question('\nWhat client is your project for?: ', {
					limit: function(input) {
						return /^(\w+( +\w+)*){3,}$/.test(input);
					},
					limitMessage: 'Client name must be a minimum of 3 characters.'
				}),

				newStylesFile,
				newScriptsFile,
				newVendorsFile;

			if (projectDirectoryIsValid) {
				// converts the project name
				projectNameNoSpaces		= projectName.split(' ').join('');
				projectNameWithDashes	= projectName.split(' ').join('-').toLowerCase();

				newStylesFile	= sourceDirectory + '/scss/' + projectNameWithDashes + '.app.scss';
				newScriptsFile	= sourceDirectory + '/js/' + projectNameWithDashes + '.app.js';
				newVendorsFile	= sourceDirectory + '/js/' + projectNameWithDashes + '.vendors.app.js';

				// update package.json file
				sed('-i', 'project_name', projectNameNoSpaces, 'package.json');
				sed('-i', 'client_name', clientName, 'package.json');

				// update bower.json file
				sed('-i', 'project_name', projectNameNoSpaces, 'bower.json');
				
				// rename the old styles and scripts files with the new styles and scripts files
				mv(originalStylesFile, newStylesFile);
				mv(originalScriptsFile, newScriptsFile);
				mv(originalVendorsFile, newVendorsFile);
			}
		}

		return;
	});

	/**
	 * Marks the setup as complete and alerts the user
	 */
	gulp.task('setup:complete', function() {
		if (projectDirectoryIsValid) {
			// removes any folders/files that start with ".git" 
			rm('-rf', '.git*');
		
			// replace setup_complete with "true" in the package.json file
			sed('-i', '"setupComplete": false', '"setupComplete": true', 'package.json');
		}

		// tell the user that the setup is complete
		console.log('\n***********************\nProject setup complete!\nHappy Coding!\n***********************\n');
	});
};