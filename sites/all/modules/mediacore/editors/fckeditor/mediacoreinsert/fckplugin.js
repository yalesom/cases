
var path = Drupal.settings.mediacoreinsert.url.wysiwyg_fckeditor;
var basePath =  Drupal.settings.basePath;
var modulePath = Drupal.settings.mediacoreinsert.modulepath;

FCKCommands.RegisterCommand( 'mediacoreinsert', new FCKDialogCommand( 'mediacoreinsert', '&nbsp;', path, 580, 480 ) ) ;

var oVideoFilterItem = new FCKToolbarButton( 'mediacoreinsert', 'mediacoreinsert');
oVideoFilterItem.IconPath = basePath + modulePath + '/editors/fckeditor/mediacoreinsert/mcore-icon.png';
FCKToolbarItems.RegisterItem( 'mediacoreinsert', oVideoFilterItem );