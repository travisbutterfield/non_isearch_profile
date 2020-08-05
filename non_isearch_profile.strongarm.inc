<?php

/**
 * @file
 * non_isearch_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function non_isearch_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_non_isearch_profile';
  $strongarm->value = '1';
  $export['ant_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_non_isearch_profile';
  $strongarm->value = '[node:field-first-name] [node:field_local_last_name]';
  $export['ant_pattern_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_non_isearch_profile';
  $strongarm->value = 0;
  $export['ant_php_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_non_isearch_profile';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_non_isearch_profile';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_non_isearch_profile';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__non_isearch_profile';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'isearch_profile_list' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_non_isearch_profile';
  $strongarm->value = array();
  $export['menu_options_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_non_isearch_profile';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_non_isearch_profile';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_non_isearch_profile';
  $strongarm->value = '1';
  $export['node_preview_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_non_isearch_profile';
  $strongarm->value = 0;
  $export['node_submitted_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_non_isearch_profile';
  $strongarm->value = array(
    'status' => 1,
    'help' => '',
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'substitute' => '',
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_non_isearch_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:non_isearch_profile:page_manager_selection';
  $strongarm->value = 'node:non_isearch_profile:default';
  $export['panelizer_node:non_isearch_profile:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:non_isearch_profile_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:34:"panelizer_node:non_isearch_profile";s:23:"allowed_layout_settings";a:76:{s:8:"flexible";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:17:"threecol_33_34_33";b:1;s:14:"twocol_stacked";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:6:"twocol";b:1;s:13:"twocol_bricks";b:1;s:16:"bartlett_flipped";b:1;s:14:"taylor_flipped";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:5:"rolph";b:1;s:7:"brenham";b:1;s:6:"taylor";b:1;s:6:"bryant";b:1;s:13:"selby_flipped";b:1;s:8:"bartlett";b:1;s:15:"hewston_flipped";b:1;s:5:"sutro";b:1;s:12:"webb_flipped";b:1;s:5:"brown";b:1;s:7:"moscone";b:1;s:12:"burr_flipped";b:1;s:15:"moscone_flipped";b:1;s:5:"geary";b:1;s:22:"bryant_flipped_flipped";b:1;s:17:"sanderson_flipped";b:1;s:15:"brenham_flipped";b:1;s:5:"selby";b:1;s:6:"boxton";b:1;s:9:"sanderson";b:1;s:6:"whelan";b:1;s:12:"sutro_double";b:1;s:4:"burr";b:1;s:8:"mccoppin";b:1;s:4:"webb";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:20:"radix_bryant_flipped";b:1;s:18:"radix_webb_flipped";b:1;s:18:"radix_sutro_double";b:1;s:19:"radix_selby_flipped";b:1;s:12:"radix_bryant";b:1;s:11:"radix_sutro";b:1;s:22:"radix_bartlett_flipped";b:1;s:12:"radix_taylor";b:1;s:10:"radix_pond";b:1;s:13:"radix_brenham";b:1;s:21:"radix_hewston_flipped";b:1;s:15:"radix_sanderson";b:1;s:11:"radix_selby";b:1;s:23:"radix_sanderson_flipped";b:1;s:14:"radix_bartlett";b:1;s:21:"radix_moscone_flipped";b:1;s:12:"radix_boxton";b:1;s:13:"radix_hewston";b:1;s:12:"radix_harris";b:1;s:26:"radix_brenham_plus_flipped";b:1;s:14:"radix_mccoppin";b:1;s:11:"radix_rolph";b:1;s:20:"radix_taylor_flipped";b:1;s:18:"radix_burr_flipped";b:1;s:10:"radix_burr";b:1;s:12:"radix_whelan";b:1;s:11:"radix_brown";b:1;s:18:"radix_brenham_plus";b:1;s:11:"radix_geary";b:1;s:13:"radix_moscone";b:1;s:21:"radix_brenham_flipped";b:1;s:10:"radix_webb";b:1;s:12:"radix_phelan";b:1;s:20:"isearch_profile_2col";b:1;s:5:"beast";b:1;s:6:"beast2";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:non_isearch_profile_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:non_isearch_profile_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:non_isearch_profile_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:non_isearch_profile_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:non_isearch_profile_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:non_isearch_profile_default';
  $strongarm->value = array(
    'entity_form_field' => 'entity_form_field',
    'custom' => 'custom',
    'token' => 'token',
    'block' => 'block',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'views' => 'views',
    'other' => 'other',
  );
  $export['panelizer_node:non_isearch_profile_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_non_isearch_profile_pattern';
  $strongarm->value = '';
  $export['pathauto_node_non_isearch_profile_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_non_isearch_profile_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_non_isearch_profile_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_non_isearch_profile_unit_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_non_isearch_profile_unit_pattern'] = $strongarm;

  return $export;
}
