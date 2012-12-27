<?php

function views_fix_pager_drush_command() {
  $items['views-display-option-export'] = array(
    'description' => "Export a views display options.",
    'arguments' => array(
      'destination' => 'Directory save file export.',
    ),
    'drupal dependencies' => array('views'),
    'aliases' => array('vdsex'),
  );
  $items['views-display-option-fix'] = array(
    'description' => "Fix a views display options.",
    'arguments' => array(
      'source' => 'File contains options.',
    ),
    'drupal dependencies' => array('views'),
    'aliases' => array('vdsf'),
  );
  return $items;
}

function drush_views_fix_pager_views_display_option_export() {
  echo $PATH;
  $args = func_get_args();
  views_fix_pager_export($args[0]);
}
function drush_views_fix_pager_views_display_option_fix() {
  $args = func_get_args();
  views_fix_pager_import($args[0]);
}