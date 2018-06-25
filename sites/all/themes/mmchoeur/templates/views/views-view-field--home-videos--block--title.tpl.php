<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
 //kpr($row);
?>
<?php //print $output; ?>
<?php
  $url = $row->field_field_url_youtube[0]['raw']['safe_value'];
  $magic = mmc_tools_youtube_player($url, 320, 210);
  $title = $row->node_title;
?>
<div class="player"><?php echo $magic; ?></div>
<div class="legend"><?php echo $title; ?></div>
