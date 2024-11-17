Site help
=======

Provides help about the page being visited, accessed via the Admin Bar. The
default Site Help links are links to relevant help pages on Backdrop CMS
documentation at https://docs.backdropcms.org/documentation/user-guide.

Links appear under Admin Bar > This page > Site help.

For example:

- When visiting `node/add/page` on your site, the site help shows a link to 
  "Creating and editing content", which is the Backdrop User Guide page about
  editing and adding site content.

A hook is provided to allow links to be created to module-defined help pages.

A form is also provided at `admin/config/administration/site-help/edit` to
manually create additional help links.

All links can be disabled.


Installation
---------------------

- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules.
- Site help links will be available under the Admin Bar "This page" link.
- Go to `admin/config/administration/site-help` to see and configure available
  links and create new ones.
- Grant the `access site help` permission to allow roles to see site help, or
  `administer site help` permission to allow configure.


REQUIREMENTS
---------------    

Admin Bar

LICENSE
---------------    

This project is GPL v2 software. See the LICENSE.txt file in this directory 
for complete text.

CURRENT MAINTAINERS
---------------    

- Docwilmot (https://github.com/docwilmot/)

