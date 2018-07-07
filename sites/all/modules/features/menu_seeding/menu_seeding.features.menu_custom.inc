<?php
/**
 * @file
 * menu_seeding.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_seeding_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Menu principal, qui s\'affiche en haut de chaque page.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Liens destinés à s\'afficher tout en bas de la page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Liens destinés à s\'afficher tout en bas de la page');
  t('Main menu');
  t('Menu principal, qui s\'affiche en haut de chaque page.');

  return $menus;
}
