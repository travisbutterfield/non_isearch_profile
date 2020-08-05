<?php

/**
 * @file
 * non_isearch_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function non_isearch_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function non_isearch_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function non_isearch_profile_node_info() {
  $items = array(
    'non_isearch_profile' => array(
      'name' => t('Non-iSearch Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
