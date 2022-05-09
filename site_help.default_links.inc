<?php


/**
 * Return default site help links.
 */
function site_help_default_links() {
  $path_links = array(
    'node' => array(
      'Using the Admin Bar' => 'https://docs.backdropcms.org/documentation/using-the-admin-bar',
      'Quick start guide' => 'Quick start guide',
    ),
    'node/%' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
    ),
    'node/%/edit' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
    ),
    'admin/structure/views' => array(
      'Views' => 'https://docs.backdropcms.org/documentation/views',
    ),
    'admin/modules' => array(
      'Modules' => 'https://docs.backdropcms.org/documentation/modules',
    ),
  );
  return $path_links;
}
