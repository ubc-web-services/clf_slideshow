<?php
/**
 * @file
 * clf_slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function clf_slideshow_views_api() {
  return array(
    "api" => "3.0",
    'path' => drupal_get_path('module', 'clf_slideshow'),
    'template path' => drupal_get_path('module', 'clf_slideshow') . '/templates',);
}

/**
 * Implements hook_node_info().
 */
function clf_slideshow_node_info() {
  $items = array(
    'article_with_slideshow' => array(
      'name' => t('Article with Slideshow'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
