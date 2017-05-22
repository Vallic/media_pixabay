(function ($) {
  'use strict';
  Drupal.behaviors.media_pixabay = {
    attach: function (context, settings) {

      // Hide embed code field.
      $('.form-item-embed-code').hide();

      $('img').once().bind('click', function (e) {
        var pixabay_url = $(this).attr('data-image');

        $('input[name="embed_code"]').val(pixabay_url);

        // Autosubmit form.
        $('#media-pixabay-external').submit();
      });
    }
  };
}(jQuery));
