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
 $unformatted = $row->field_field_date_agenda[0]['raw']['value'];
 $timezoneDb = new DateTimeZone($row->field_field_date_agenda[0]['raw']['timezone_db']);
 $timezoneDisplayed = new DateTimeZone($row->field_field_date_agenda[0]['raw']['timezone']);

 $utcDate = DateTime::createFromFormat('Y-m-d H:i:s', $unformatted, $timezoneDb);
 $unformattedDate = $utcDate->setTimeZone($timezoneDisplayed);
?>
<div class="date short-date">
  <span class="day"><?= $unformattedDate->format('d'); ?></span>
  <span class="month"><?= $unformattedDate->format('M'); ?>.</span>
  <span class="year"><?= $unformattedDate->format('Y'); ?></span>
</div>
<span class="date hour-precision">
  <span class="from-label">à partir de</span>
  <span class="from-hour"><?= $unformattedDate->format('H'); ?>h<?= $unformattedDate->format('i'); ?></span>
</span>
