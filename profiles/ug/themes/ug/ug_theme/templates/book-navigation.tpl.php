<?php

/**
 * @file
 * Default theme implementation to navigate books.
 *
 * Presented under nodes that are a part of book outlines.
 *
 * Available variables:
 * - $tree: The immediate children of the current node rendered as an unordered
 *   list.
 * - $current_depth: Depth of the current node within the book outline. Provided
 *   for context.
 * - $prev_url: URL to the previous node.
 * - $prev_title: Title of the previous node.
 * - $parent_url: URL to the parent node.
 * - $parent_title: Title of the parent node. Not printed by default. Provided
 *   as an option.
 * - $next_url: URL to the next node.
 * - $next_title: Title of the next node.
 * - $has_links: Flags TRUE whenever the previous, parent or next data has a
 *   value.
 * - $book_id: The book ID of the current outline being viewed. Same as the node
 *   ID containing the entire outline. Provided for context.
 * - $book_url: The book/node URL of the current outline being viewed. Provided
 *   as an option. Not used by default.
 * - $book_title: The book/node title of the current outline being viewed.
 *   Provided as an option. Not used by default.
 *
 * @see template_preprocess_book_navigation()
 *
 * @ingroup themeable
 */
?>
<?php if ($tree || $has_links): ?>
  <div id="book-navigation-<?php print $book_id; ?>" class="book-navigation">
    <?php if ($tree): ?>
      <h2><?php print t('Contents'); ?></h2>
      <?php print $tree; ?>
    <?php endif; ?>
    <?php if ($has_links): ?>
    <ul class="nav nav-pills nav-justified page-links">
      <?php if ($prev_url): ?>
        <li role="presentation">
          <a href="<?php print $prev_url; ?>" title="<?php print $prev_title; ?>" class="page-previous">
          <span class="glyphicon glyphicon-chevron-left"></span>
          <span class="sr-only"><?php print t('Previous'); ?>:</span>
          <?php print $prev_title; ?></a>
      <?php endif; ?>
      <?php if ($parent_url): ?>
        <li role="presentation">
          <a href="<?php print $parent_url; ?>" title="<?php print $parent_title; ?>" class="page-up">
            <span class="glyphicon glyphicon-chevron-up"></span>
	    <?php print t('Up'); ?>
          </a>
      <?php endif; ?>
      <?php if ($next_url): ?>
        <li role="presentation">
          <a href="<?php print $next_url; ?>" title="<?php print $next_title; ?>" class="page-next">
          <span class="sr-only"><?php print t('Next'); ?>:</span>
          <?php print $next_title; ?>
          <span class="glyphicon glyphicon-chevron-right"></span></a>
      <?php endif; ?>
    </ul>
    <?php endif; ?>
  </div>
<?php endif; ?>
