<?php

/**
 * @file
 * Media module integration for the Media Pixabay module.
 */

/**
 * Implements hook_media_browser_plugin_info().
 */
function media_pixabay_media_browser_plugin_info() {

  $info['pixabay'] = array(
    'title' => t('Pixabay'),
    'class' => 'MediaPixabay',
    'weight' => -9,
  );

  return $info;
}
