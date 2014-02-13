cases
=====

Drupal project for SOM Cases

All special PHP libs have been contained within Drupal using the Libraries Module

The following changes need to be made to the php.ini file to allow for the processing of spreadsheets with Sheetnode and PHPExcel.
* max_execution_time = 60 (normally 30)
* memory_limit = 256M
* upload_max_filesize = 60M


