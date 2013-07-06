<?php
/**
 * @file
 * clf_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function clf_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_featured';
  $view->description = 'Views that control the featured items that appear on the homepage';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Featured Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Featured';
  $handler->display->display_options['css_class'] = 'homepage-feature carousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Homepage Image */
  $handler->display->display_options['fields']['field_homepage_image']['id'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['table'] = 'field_data_field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['field'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepage_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Homepage Image Caption */
  $handler->display->display_options['fields']['field_homepage_image_caption']['id'] = 'field_homepage_image_caption';
  $handler->display->display_options['fields']['field_homepage_image_caption']['table'] = 'field_data_field_homepage_image_caption';
  $handler->display->display_options['fields']['field_homepage_image_caption']['field'] = 'field_homepage_image_caption';
  $handler->display->display_options['fields']['field_homepage_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_image_caption']['element_default_classes'] = FALSE;
  /* Field: Content: Homepage Image Title */
  $handler->display->display_options['fields']['field_homepage_image_title']['id'] = 'field_homepage_image_title';
  $handler->display->display_options['fields']['field_homepage_image_title']['table'] = 'field_data_field_homepage_image_title';
  $handler->display->display_options['fields']['field_homepage_image_title']['field'] = 'field_homepage_image_title';
  $handler->display->display_options['fields']['field_homepage_image_title']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_image_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_image_title']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'more';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_homepage_image]
<div class="carousel-caption">
<h4>[title]</h4>
<p>[field_homepage_image_caption]  [view_node]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
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
    'article_with_slideshow' => 'article_with_slideshow',
  );
  /* Filter criterion: Content: Feature on the Homepage Carousel (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    1 => '1',
  );

  /* Display: Homepage Carousel Block */
  $handler = $view->new_display('block', 'Homepage Carousel Block', 'block');
  $handler->display->display_options['block_description'] = 'Homepage: Featured';
  $export['homepage_featured'] = $view;

  return $export;
}
