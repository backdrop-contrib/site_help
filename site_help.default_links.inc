<?php


/**
 * Return default site help links.
 */
function site_help_default_links() {
  $path_links = array(
    'node' => array(
      'Using the Admin Bar' => 'https://docs.backdropcms.org/documentation/using-the-admin-bar',
      'Quick start guide' => 'https://docs.backdropcms.org/documentation/quick-start-guide',
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
    'admin/content/comment' => array(
      'Managing comments' => 'https://docs.backdropcms.org/documentation/managing-comments',
    ),
    'admin/content/files' => array(
      'Working with files' => 'https://docs.backdropcms.org/documentation/working-with-files',
    ),
    'admin/structure/contact' => array(
      'Contact forms' => 'https://docs.backdropcms.org/documentation/contact-forms',
    ),
    'admin/appearance' => array(
      'Themes' => 'https://docs.backdropcms.org/documentation/themes',
    ),
    'admin/structure/types' => array(
      'Content types' => 'https://docs.backdropcms.org/documentation/content-types',
    ),
    'admin/structure/types/manage/%/fields' => array(
      'Fields' => 'https://docs.backdropcms.org/documentation/fields',
    ),
    'admin/structure/menu' => array(
      'Menus' => 'https://docs.backdropcms.org/documentation/menus',
    ),
    'admin/structure/taxonomy' => array(
      'Taxonomy' => 'https://docs.backdropcms.org/documentation/taxonomy',
    ),
    'admin/config/people' => array(
      'Users, roles and permissions' => 'https://docs.backdropcms.org/documentation/users-roles-and-permissions',
    ),
    'admin/config/people/permissions' => array(
      'Users, roles and permissions' => 'https://docs.backdropcms.org/documentation/users-roles-and-permissions',
    ),
    'admin/config/people/roles' => array(
      'Users, roles and permissions' => 'https://docs.backdropcms.org/documentation/users-roles-and-permissions',
    ),
    'admin/structure/layouts' => array(
      'Layouts and templates' => 'https://docs.backdropcms.org/documentation/layouts-and-templates',
    ),
    'admin/structure/layouts/manage/%' => array(
      'Blocks' => 'https://docs.backdropcms.org/documentation/blocks',
      'Layouts and templates' => 'https://docs.backdropcms.org/documentation/layouts-and-templates',
    ),
    'admin/structure/%/install' => array(
      'Project Installer and updates' => 'https://docs.backdropcms.org/documentation/project-installer-and-updates',
    ),
    'admin/config/urls' => array(
      'URLs/paths' => 'https://docs.backdropcms.org/documentation/urls-and-paths',
    ),

  );
  return $path_links;
}
