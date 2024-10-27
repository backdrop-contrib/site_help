<?php


/**
 * Return default site help links.
 */
function site_help_default_links() {
  $path_links = array(
    'node' => array(
      'Using the Admin Bar' => 'https://docs.backdropcms.org/documentation/using-the-admin-bar',
    ),
    'node/%' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
      'Quick start guide' => 'https://docs.backdropcms.org/documentation/quick-start-guide',
    ),
    'node/%/edit' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/config/content/formats' => array(
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/config/content/formats/%' => array(
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/config/content/formats/%/disable' => array(
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/config/content/formats/%/enable' => array(
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/config/content/formats/%/filter-settings/%' => array(
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/config/content/formats/add' => array(
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/config/content/formats/list' => array(
      'Text Formats, Editors & Filters' => 'https://docs.backdropcms.org/documentation/text-formats-editors-filters',
    ),
    'admin/structure/views' => array(
      'Views' => 'https://docs.backdropcms.org/documentation/views',
    ),
    'admin/structure/views/add' => array(
      'Views' => 'https://docs.backdropcms.org/documentation/views',
    ),
    'admin/structure/views/list' => array(
      'Views' => 'https://docs.backdropcms.org/documentation/views',
    ),
    'admin/structure/views/settings' => array(
      'Views' => 'https://docs.backdropcms.org/documentation/views',
    ),
    'admin/structure/views/settings/advanced' => array(
      'Views' => 'https://docs.backdropcms.org/documentation/views',
    ),
    'admin/structure/views/settings/basic' => array(
      'Views' => 'https://docs.backdropcms.org/documentation/views',
    ),
    'admin/structure/views/view/%' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
    ),
    'admin/structure/views/view/%/clone' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
    ),
    'admin/structure/views/view/%/configure' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
    ),
    'admin/structure/views/view/%/delete' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
    ),
    'admin/structure/views/view/%/disable' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
    ),
    'admin/structure/views/view/%/enable' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
    ),
    'admin/structure/views/view/%/preview/%' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
    ),
    'admin/structure/views/view/%/revert' => array(
      'Configuring Views' => 'https://docs.backdropcms.org/documentation/configuring-views',
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
    'admin/appearance/list' => array(
      'Themes' => 'https://docs.backdropcms.org/documentation/themes',
    ),
    'admin/structure/types' => array(
      'Content types' => 'https://docs.backdropcms.org/documentation/content-types',
    ),
    'admin/structure/types/add' => array(
      'Creating a New Content Type' => 'https://docs.backdropcms.org/documentation/creating-a-new-content-type',
    ),
    'admin/structure/types/manage/%/fields' => array(
      'Fields' => 'https://docs.backdropcms.org/documentation/fields',
    ),
    'admin/structure/taxonomy/manage/%/fields' => array(
      'Fields' => 'https://docs.backdropcms.org/documentation/fields',
    ),
    'admin/structure/user/manage/%/fields' => array(
      'Fields' => 'https://docs.backdropcms.org/documentation/fields',
    ),
    'admin/structure/types/manage/%/display' => array(
      'Content Display Settings' => 'https://docs.backdropcms.org/documentation/content-display-settings',
    ),
    'admin/structure/taxonomy/manage/%/display' => array(
      'Taxonomy Display Settings' => 'https://docs.backdropcms.org/documentation/content-display-settings',
    ),
    'admin/structure/user/manage/%/display' => array(
      'User Display Settings' => 'https://docs.backdropcms.org/documentation/content-display-settings',
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
    'admin/structure/layouts/add' => array(
      'Layouts and templates' => 'https://docs.backdropcms.org/documentation/layouts-and-templates',
      'Layout Contexts' => 'https://docs.backdropcms.org/documentation/layout-contexts',
      'Visibility Conditions' => 'https://docs.backdropcms.org/documentation/visibility-conditions',
    ),
    'admin/structure/layouts/install' => array(
      'Layouts and templates' => 'https://docs.backdropcms.org/documentation/layouts-and-templates',
    ),
    'admin/structure/layouts/list' => array(
      'Layouts and templates' => 'https://docs.backdropcms.org/documentation/layouts-and-templates',
    ),
    'admin/structure/layouts/manage/%/configure' => array(
      'Layout Contexts' => 'https://docs.backdropcms.org/documentation/layout-contexts',
      'Visibility Conditions' => 'https://docs.backdropcms.org/documentation/visibility-conditions',
    ),
    'admin/structure/%/install' => array(
      'Project Installer and updates' => 'https://docs.backdropcms.org/documentation/project-installer-and-updates',
    ),
    'admin/config/urls' => array(
      'URLs/paths' => 'https://docs.backdropcms.org/documentation/urls-and-paths',
    ),
    'admin/config/urls/path' => array(
      'URL aliases' => 'https://docs.backdropcms.org/documentation/url-aliases',
    ),
    'admin/config/urls/path/bulk-update' => array(
      'URL aliases' => 'https://docs.backdropcms.org/documentation/url-aliases',
    ),
    'admin/config/urls/path/patterns' => array(
      'URL aliases' => 'https://docs.backdropcms.org/documentation/url-aliases',
    ),
    'admin/config/urls/redirect' => array(
      'URL redirects' => 'https://docs.backdropcms.org/documentation/url-redirects',
    ),
    'admin/config/urls/redirect/add' => array(
      'URL redirects' => 'https://docs.backdropcms.org/documentation/url-redirects',
    ),
    'admin/config/urls/redirect/404' => array(
      'URL redirects' => 'https://docs.backdropcms.org/documentation/url-redirects',
    ),
    'admin/config/urls/redirect/settings' => array(
      'URL redirects' => 'https://docs.backdropcms.org/documentation/url-redirects',
    ),
    'admin/config/urls/settings' => array(
      'URL settings' => 'https://docs.backdropcms.org/documentation/clean-urls',
    ),
    'admin/config/administration/admin-bar' => array(
      'Using the Admin Bar' => 'https://docs.backdropcms.org/documentation/using-the-admin-bar',
    ),
    'node/add' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
    ),
    'node/add/card' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
    ),
    'node/add/page' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
    ),
    'node/add/post' => array(
      'Creating and editing content' => 'https://docs.backdropcms.org/documentation/creating-and-editing-content',
    ),
    // 'admin/config/administration' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/content' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full/export' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full/export-download' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full/import' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/single' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/single/export' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/single/import' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/sync' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/sync/diff/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/jquery' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/logging' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/maintenance' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/performance' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing/results/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/utf8mb4-upgrade' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/file-system' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/file-system/transliteration' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/icons' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/icons/browse' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/icons/browse/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%/add/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%/effects/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%/effects/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/delete/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%/add/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%/effects/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%/effects/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/revert/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-toolkit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/metadata' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/emails' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/login' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/reset' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/default' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/full' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/overview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/token' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/field-settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/widget-type' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/layouts' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/layouts/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/configure/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/delete/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/edit/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/lookup' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-views' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/clean-urls' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/bulk-delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/bulk-update' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/delete/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/edit/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/patterns' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/patterns/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/patterns/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/404' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/delete/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/edit/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/settings/reindex' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/urls' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/urls/check' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/services' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/services/rss-publishing' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system/cron' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system/site-information' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system/updates' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/bulk-update' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/delete/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/edit/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/patterns' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/patterns/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/patterns/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/404' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/delete/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/edit/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/settings/check' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/user-interface' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/comment/approval' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/comment/new' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/files/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/node' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/node/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/dashboard' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/dashboard/overview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/dashboard/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/index' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/bulk/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/install/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/manual' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/project/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/queue/%/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/reset/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/install' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/list/confirm' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/uninstall' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/uninstall/confirm' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/update' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people/cancel' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people/create' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/access-denied' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/blocks' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/dblog' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/debug' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/event/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/fields' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/fields/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/fields/views-fields' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/page-not-found' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/page-not-found/redirect' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/search' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status/php' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status/rebuild' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status/run-cron' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/telemetry' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates/check' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/views-plugins' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/translate/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/translation' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/classify' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/disable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/reset' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/default' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/full' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/overview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/preview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/teaser' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/token' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/field-settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/widget-type' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/default' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/full' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/preview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/teaser' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/token' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/layouts' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/layouts/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/revert' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/add-block/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/blocks' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/clone' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/configure-block/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/configure-redirect/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/configure-region/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/context/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/context/edit/layout/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/disable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/edit-title/editor/title' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/relationship/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/relationship/edit/layout/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/remove-block/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/toggle-block-status/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%/condition/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%/condition/edit/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/reorder' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/configure/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/select-widths' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/toggle/%/disable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/toggle/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/update' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/item/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/item/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/item/%/reset' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/parents' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/reset' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/default' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/full' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/overview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/token' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/field-settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/widget-type' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/layouts' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/layouts/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/list' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/reset' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/default' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/full' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/overview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/token' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/field-settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/widget-type' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/configure' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/enable' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/reset' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/default' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/full' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/overview' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/rss' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/search_index' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/search_result' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/teaser' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/token' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/field-settings' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/widget-type' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/layouts' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/layouts/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/tasks' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/update/ready' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin_bar/flush-cache' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'batch' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'boo' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'ckeditor/upload/image/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'color/save_preview_settings/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/approve' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/view' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/reply/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'editor/dialog/image/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'editor/dialog/link/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/download' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/manage' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/usage' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/view' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/add' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/ajax' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/progress' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'files/styles/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'filter/tips' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'filter/tips/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'home' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'imageslib' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'imce' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'js/admin_bar/cache' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/done' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions/%/revert' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions/%/view' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/view' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/autocomplete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/preview/card/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/preview/page/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/preview/post/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'path-autocomplete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'rss.xml' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/node' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/node/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/user' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/user/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/files' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/files/styles/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/timezone' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/transliterate/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/delete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/feed' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/view' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'token/tree' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/cancel' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/cancel/confirm/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/edit' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/imce' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/view' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/autocomplete' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/login' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/logout' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/password' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/register' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/reset/%/%/%' => array(
      // 'Backdrop user guide' => 'https://docs.backdropcms.org/documentation/',
    // ),

  );
  return $path_links;
}
