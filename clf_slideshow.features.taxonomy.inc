<?php
/**
 * @file
 * clf_slideshow.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function clf_slideshow_taxonomy_default_vocabularies() {
  return array(
    'article_type' => array(
      'name' => 'Article Type',
      'machine_name' => 'article_type',
      'description' => 'The type of article you would like to create',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
