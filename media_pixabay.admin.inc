<?php

/**
 * @file
 * Definition of all admin pages.
 */

/**
 * Implements hook_admin().
 */
function media_pixabay_admin() {
  $form = array();
  $form['media_pixabay_api'] = array(
    '#type' => 'textfield',
    '#title' => t('Pixabay API key'),
    '#default_value' => variable_get('media_pixabay_api', ""),
    '#description' => t('Register on Pixabay.com and get your API key <a href="https://pixabay.com/api/docs/#api_rate_limit">here</a>.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
