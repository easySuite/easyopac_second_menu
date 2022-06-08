# easyOPAC Second Menu

Adds second menu block between the "Main menu" and "Search" bars.
This block in fact represents a panel pane inserted in the Site default page
template with menu called "Second Tier Menu". Menu is created and inserted in
pane on module install. Links are added to this menu in a standard way through
Drupal Menu management UI.
Second menu background color is configurable from the Ddbasic theme Appearance
settings page.

### Installation
Installation process is default as for other Drupal modules: Enable module
from `@/admin/modules` page or with drush - `drush en -y easyopac_second_menu`.

### Configuration
1. Add menu links at `/admin/structure/menu/manage/second_tier_menu` page.
2. Configure new menu toolbar background color at
   `/admin/appearance/settings/ddbasic`, the "Second Menu Background" field.
   By default, the ddbasic's theme primary color will be set as default for
   this field.
