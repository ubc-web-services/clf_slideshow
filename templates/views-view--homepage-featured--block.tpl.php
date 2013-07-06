<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div id="ubc7-carousel" class="ubc-carousel carousel slide <?php print $classes; ?>" role="complementary" aria-label="promotions" >
<div class="carousel-inner">

  <?php if ($rows): ?>
      <?php print $rows; ?>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

</div>
<!-- Carousel controller -->
<div id="ubc7-carousel-controller">
<button type="button" class="ubc7-carousel-control left" data-slide="prev"></button>
<button type="button" class="ubc7-carousel-control pause" data-slide="pause"></button>
<button type="button" class="ubc7-carousel-control right" data-slide="next"></button>
<div class="ubc7-carousel-counter"></div>
</div>
</div><?php /* class view */ ?>
