<?php

/**
 * @file
 * non_isearch_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function non_isearch_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'non_isearch_affiliations';
  $view->description = 'Generates dynamic panel pane that lists affiliations values (grouped by affiliation) based on the iSearch profile NID. Rendered in iSearch profile nodes.';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Non-iSearch Affiliations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
  $handler->display->display_options['style_options']['title_field'] = 'field_organization';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Affiliations (field_affiliations) */
  $handler->display->display_options['relationships']['field_affiliations_node']['id'] = 'field_affiliations_node';
  $handler->display->display_options['relationships']['field_affiliations_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_affiliations_node']['field'] = 'field_affiliations_node';
  $handler->display->display_options['relationships']['field_affiliations_node']['required'] = TRUE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_isearch_affil_title']['id'] = 'field_isearch_affil_title';
  $handler->display->display_options['fields']['field_isearch_affil_title']['table'] = 'field_data_field_isearch_affil_title';
  $handler->display->display_options['fields']['field_isearch_affil_title']['field'] = 'field_isearch_affil_title';
  $handler->display->display_options['fields']['field_isearch_affil_title']['label'] = '';
  $handler->display->display_options['fields']['field_isearch_affil_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_isearch_affil_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  /* Field: Field collection item: Position Title */
  $handler->display->display_options['fields']['field_position_title']['id'] = 'field_position_title';
  $handler->display->display_options['fields']['field_position_title']['table'] = 'field_data_field_position_title';
  $handler->display->display_options['fields']['field_position_title']['field'] = 'field_position_title';
  /* Field: Field collection item: Dept */
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['id'] = 'field_isearch_affil_dept_name';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['table'] = 'field_data_field_isearch_affil_dept_name';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['field'] = 'field_isearch_affil_dept_name';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['label'] = '';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Employee Type */
  $handler->display->display_options['fields']['field_isearch_affil_empl_type']['id'] = 'field_isearch_affil_empl_type';
  $handler->display->display_options['fields']['field_isearch_affil_empl_type']['table'] = 'field_data_field_isearch_affil_empl_type';
  $handler->display->display_options['fields']['field_isearch_affil_empl_type']['field'] = 'field_isearch_affil_empl_type';
  $handler->display->display_options['fields']['field_isearch_affil_empl_type']['label'] = '';
  $handler->display->display_options['fields']['field_isearch_affil_empl_type']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Campus */
  $handler->display->display_options['fields']['field_isearch_affil_campus']['id'] = 'field_isearch_affil_campus';
  $handler->display->display_options['fields']['field_isearch_affil_campus']['table'] = 'field_data_field_isearch_affil_campus';
  $handler->display->display_options['fields']['field_isearch_affil_campus']['field'] = 'field_isearch_affil_campus';
  /* Field: Field collection item: Mailcode */
  $handler->display->display_options['fields']['field_isearch_affil_mailcode']['id'] = 'field_isearch_affil_mailcode';
  $handler->display->display_options['fields']['field_isearch_affil_mailcode']['table'] = 'field_data_field_isearch_affil_mailcode';
  $handler->display->display_options['fields']['field_isearch_affil_mailcode']['field'] = 'field_isearch_affil_mailcode';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'field_affiliations_node';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['validate_options']['types'] = array(
    'non_isearch_profile' => 'non_isearch_profile',
  );
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['item_id']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;

  /* Display: Non-iSearch Profile Affiliations */
  $handler = $view->new_display('panel_pane', 'Non-iSearch Profile Affiliations', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Position Title */
  $handler->display->display_options['fields']['field_position_title']['id'] = 'field_position_title';
  $handler->display->display_options['fields']['field_position_title']['table'] = 'field_data_field_position_title';
  $handler->display->display_options['fields']['field_position_title']['field'] = 'field_position_title';
  $handler->display->display_options['fields']['field_position_title']['label'] = '';
  $handler->display->display_options['fields']['field_position_title']['element_label_colon'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_isearch_affil_title' => 'field_isearch_affil_title',
    'field_isearch_affil_dept_name' => 0,
    'field_isearch_affil_empl_type' => 0,
    'field_isearch_affil_campus' => 0,
    'field_isearch_affil_mailcode' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_isearch_affil_title']['id'] = 'field_isearch_affil_title';
  $handler->display->display_options['fields']['field_isearch_affil_title']['table'] = 'field_data_field_isearch_affil_title';
  $handler->display->display_options['fields']['field_isearch_affil_title']['field'] = 'field_isearch_affil_title';
  $handler->display->display_options['fields']['field_isearch_affil_title']['label'] = '';
  $handler->display->display_options['fields']['field_isearch_affil_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_isearch_affil_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Dept */
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['id'] = 'field_isearch_affil_dept_name';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['table'] = 'field_data_field_isearch_affil_dept_name';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['field'] = 'field_isearch_affil_dept_name';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['label'] = '';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['alter']['text'] = '[field_isearch_affil_dept_name-value] <em>([field_isearch_affil_title])</em>';
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_isearch_affil_dept_name']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_isearch_affiliations_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'asu_isearch_profile' => 'asu_isearch_profile',
  );
  $export['non_isearch_affiliations'] = $view;

  $view = new view();
  $view->name = 'nonisearch_profiles_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Non-iSearch Profiles Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Non-iSearch Profiles Grid';
  $handler->display->display_options['css_class'] = 'view-isearch-local-grid';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '32';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '3';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Affiliations (field_affiliations) */
  $handler->display->display_options['relationships']['field_affiliations_value']['id'] = 'field_affiliations_value';
  $handler->display->display_options['relationships']['field_affiliations_value']['table'] = 'field_data_field_affiliations';
  $handler->display->display_options['relationships']['field_affiliations_value']['field'] = 'field_affiliations_value';
  $handler->display->display_options['relationships']['field_affiliations_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_internal_unit_association_target_id']['id'] = 'field_internal_unit_association_target_id';
  $handler->display->display_options['relationships']['field_internal_unit_association_target_id']['table'] = 'field_data_field_internal_unit_association';
  $handler->display->display_options['relationships']['field_internal_unit_association_target_id']['field'] = 'field_internal_unit_association_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_internal_unit_category_target_id']['id'] = 'field_internal_unit_category_target_id';
  $handler->display->display_options['relationships']['field_internal_unit_category_target_id']['table'] = 'field_data_field_internal_unit_category';
  $handler->display->display_options['relationships']['field_internal_unit_category_target_id']['field'] = 'field_internal_unit_category_target_id';
  /* Field: Content: Headshot */
  $handler->display->display_options['fields']['field_headshot']['id'] = 'field_headshot';
  $handler->display->display_options['fields']['field_headshot']['table'] = 'field_data_field_headshot';
  $handler->display->display_options['fields']['field_headshot']['field'] = 'field_headshot';
  $handler->display->display_options['fields']['field_headshot']['label'] = '';
  $handler->display->display_options['fields']['field_headshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_headshot']['settings'] = array(
    'image_style' => '150x150',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Field collection item: Position Title */
  $handler->display->display_options['fields']['field_position_title']['id'] = 'field_position_title';
  $handler->display->display_options['fields']['field_position_title']['table'] = 'field_data_field_position_title';
  $handler->display->display_options['fields']['field_position_title']['field'] = 'field_position_title';
  $handler->display->display_options['fields']['field_position_title']['relationship'] = 'field_affiliations_value';
  $handler->display->display_options['fields']['field_position_title']['label'] = '';
  $handler->display->display_options['fields']['field_position_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_position_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['relationship'] = 'field_affiliations_value';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_nonisearch_email']['id'] = 'field_nonisearch_email';
  $handler->display->display_options['fields']['field_nonisearch_email']['table'] = 'field_data_field_nonisearch_email';
  $handler->display->display_options['fields']['field_nonisearch_email']['field'] = 'field_nonisearch_email';
  $handler->display->display_options['fields']['field_nonisearch_email']['label'] = '';
  $handler->display->display_options['fields']['field_nonisearch_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Last name (field_local_last_name) */
  $handler->display->display_options['sorts']['field_local_last_name_value']['id'] = 'field_local_last_name_value';
  $handler->display->display_options['sorts']['field_local_last_name_value']['table'] = 'field_data_field_local_last_name';
  $handler->display->display_options['sorts']['field_local_last_name_value']['field'] = 'field_local_last_name_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'non_isearch_profile' => 'non_isearch_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $export['nonisearch_profiles_grid'] = $view;

  return $export;
}
