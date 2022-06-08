<?php

/**
 * @file
 * Extends the default site template with new region.
 */

$plugin = array(
  'title'     => t('Ding2 Site template'),
  'theme'     => 'ding2_site_template2',
  'icon'      => 'ding2_site_template.png',
  'category'  => 'Ding2, theme',
  'regions' => array(
    'branding'         => t('Branding'),
    'header'           => t('Header'),
    'navigation'       => t('Navigation'),
    'second_menu_tier' => t('Second Menu Tier'),
    'content'          => t('Main content'),
    'footer'           => t('Footer'),
    'bottom'           => t('Bottom'),
  ),
);
