# This repo uses composer to build the desired version of Drupal Core.  At the time this was developed Yale School of Management IT has not developed the finalized Local Development Environment (LDE).  In the near future a LDE will be included which may be a combination of Docker and Composer.

## Pre-Requisite
composer  -- See https://getcomposer.org/

## To start Developing
* git clone this repo
* composer install  -- if this is the first time you are building
* copmoser update   -- if you had previously run composer install
* make your updates

## Notes
* All of your changes should be done in sites/all (libraries, modules, themes)
* For now all Contrib modules will be Versioned.  In the future this will be done with composer
* If you create / modify a file outside of sites/all your changes will be ignored by git

## Roadmap
* Move all Contrib modules to composer.
The following changes need to be made to the php.ini file to allow for the processing of spreadsheets with Sheetnode and PHPExcel.
* max_execution_time = 60 (normally 30)
* memory_limit = 256M
* upload_max_filesize = 60M
