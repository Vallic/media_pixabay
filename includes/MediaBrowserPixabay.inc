<?php

/**
 * @file
 * Definition of MediaBrowserPixabay.
 */

/**
 * Media browser plugin for showing images from Pixabay.
 *
 * @deprecated
 */
class MediaBrowserPixabay extends MediaBrowserPlugin {
  /**
   * Implements MediaBrowserPluginInterface::access().
   */
  public function access($account = NULL) {
    return TRUE;
  }

  /**
   * Implements MediaBrowserPlugin::view().
   */
  public function view() {
    module_load_include('inc', 'file_entity', 'file_entity.pages');

    $build = array();
    $params = $this->params;
    $params['pixabay'] = TRUE;
    $build['form'] = drupal_get_form('media_pixabay_external', $params);

    return $build;
  }
}
