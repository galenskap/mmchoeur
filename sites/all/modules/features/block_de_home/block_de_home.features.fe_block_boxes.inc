<?php
/**
 * @file
 * block_de_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_de_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Petit mot de page d\'accueil (à côté de l\'agenda)';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'edito';
  $fe_block_boxes->body = '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>

<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

<p><a class="btn primary know-more" href="content/notre-chorale">En savoir plus</a></p>
';

  $export['edito'] = $fe_block_boxes;

  return $export;
}
