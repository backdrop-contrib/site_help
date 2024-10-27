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
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/content' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full/export' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full/export-download' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/full/import' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/single' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/single/export' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/single/import' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/sync' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/configuration/sync/diff/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/jquery' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/logging' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/maintenance' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/performance' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing/results/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/testing/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/development/utf8mb4-upgrade' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/file-system' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/file-system/transliteration' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/icons' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/icons/browse' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/icons/browse/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%/add/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%/effects/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/configure/%/effects/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/delete/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%/add/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%/effects/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/edit/%/effects/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-styles/revert/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/media/image-toolkit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/metadata' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/emails' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/login' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/%/reset' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/default' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/full' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/overview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/display/token' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/field-settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/fields/%/widget-type' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/layouts' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/manage/layouts/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/configure/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/delete/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/roles/edit/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/people/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-time/formats/lookup' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/date-views' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/regional/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/clean-urls' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/bulk-delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/bulk-update' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/delete/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/edit/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/patterns' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/patterns/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/path/patterns/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/404' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/delete/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/edit/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/redirect/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/settings/reindex' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/urls' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/search/urls/check' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/services' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/services/rss-publishing' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system/cron' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system/site-information' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/system/updates' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/bulk-update' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/delete/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/edit/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/patterns' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/patterns/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/path/patterns/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/404' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/delete/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/edit/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/redirect/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/urls/settings/check' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/config/user-interface' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/comment/approval' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/comment/new' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/files/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/node' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/content/node/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/dashboard' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/dashboard/overview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/dashboard/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/index' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/bulk/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/install/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/manual' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/project/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/queue/%/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/installer/reset/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/install' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/list/confirm' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/uninstall' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/uninstall/confirm' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/modules/update' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people/cancel' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people/create' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/people/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/access-denied' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/blocks' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/dblog' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/debug' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/event/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/fields' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/fields/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/fields/views-fields' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/page-not-found' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/page-not-found/redirect' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/search' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status/php' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status/rebuild' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/status/run-cron' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/telemetry' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates/check' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/updates/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/reports/views-plugins' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/translate/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/block/manage/%/translation' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/classify' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/disable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/%/reset' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/default' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/full' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/overview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/preview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/teaser' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/display/token' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/field-settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/fields/%/widget-type' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/default' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/full' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/preview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/teaser' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/file-display/token' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/layouts' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/layouts/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/manage/%/revert' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/file-types/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/add-block/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/blocks' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/clone' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/configure-block/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/configure-redirect/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/configure-region/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/context/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/context/edit/layout/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/disable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/edit-title/editor/title' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/relationship/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/relationship/edit/layout/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/remove-block/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/manage/%/toggle-block-status/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%/condition/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%/condition/edit/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/menu/%/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/reorder' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/configure/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/%/row/%/select-widths' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/flexible-template/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/toggle/%/disable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/settings/toggle/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/layouts/update' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/item/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/item/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/item/%/reset' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/manage/%/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/parents' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/menu/settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/%/reset' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/default' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/full' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/overview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/display/token' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/field-settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/fields/%/widget-type' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/layouts' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/layouts/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/%/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/taxonomy/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/list' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/%/reset' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/default' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/full' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/overview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/display/token' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/field-settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/comment/fields/%/widget-type' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/configure' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/enable' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/%/reset' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/default' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/full' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/overview' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/rss' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/search_index' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/search_result' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/teaser' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/display/token' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/field-settings' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/fields/%/widget-type' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/layouts' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/structure/types/manage/%/layouts/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/tasks' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin/update/ready' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'admin_bar/flush-cache' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'batch' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'boo' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'ckeditor/upload/image/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'color/save_preview_settings/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/approve' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/%/view' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'comment/reply/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'editor/dialog/image/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'editor/dialog/link/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/download' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/manage' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/usage' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/%/view' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/add' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/ajax' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'file/progress' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'files/styles/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'filter/tips' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'filter/tips/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'home' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'imageslib' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'imce' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'js/admin_bar/cache' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/done' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions/%/revert' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/revisions/%/view' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/%/view' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/autocomplete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/preview/card/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/preview/page/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'node/preview/post/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'path-autocomplete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'rss.xml' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/node' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/node/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/user' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'search/user/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/files' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/files/styles/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/timezone' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'system/transliterate/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/delete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/feed' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'taxonomy/term/%/view' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'token/tree' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/cancel' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/cancel/confirm/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/edit' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/imce' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/%/view' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/autocomplete' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/login' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/logout' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/password' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/register' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),
    // 'user/reset/%/%/%' => array(
      // 'Site help' => 'https://docs.backdropcms.org/documentation/',
    // ),

  );
  return $path_links;
}
