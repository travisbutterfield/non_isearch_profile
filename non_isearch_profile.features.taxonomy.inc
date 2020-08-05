<?php

/**
 * @file
 * non_isearch_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function non_isearch_profile_taxonomy_default_vocabularies() {
  return array(
    'non_isearch_profile_category' => array(
      'name' => 'Non-iSearch Profile Category',
      'machine_name' => 'non_isearch_profile_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'non_isearch_profile_unit' => array(
      'name' => 'Non-iSearch Profile Unit',
      'machine_name' => 'non_isearch_profile_unit',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
