<?php
/**
 * @file
 * filbaan_data.features.inc
 */

/**
 * Implements hook_node_info().
 */
function filbaan_data_node_info() {
  $items = array(
    'keyword' => array(
      'name' => t('Keyword'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'microstory' => array(
      'name' => t('Microstory'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'network' => array(
      'name' => t('Network'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'report' => array(
      'name' => t('Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Link'),
      'help' => '',
    ),
    'site' => array(
      'name' => t('Site'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title [Farsi]'),
      'help' => '',
    ),
    'status' => array(
      'name' => t('Status'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
