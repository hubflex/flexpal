<?php
/**
 * @file
 * rlab_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rlab_styles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function rlab_styles_fontyourface_features_default_font() {
  return array(
    'Futura PT Condensed Extra Bold' => array(
      'name' => 'Futura PT Condensed Extra Bold',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/futura-pt-condensed#n8',
      'provider' => 'typekit_api',
      'css_selector' => '',
      'css_family' => '\'futura-pt-condensed\'',
      'css_style' => 'normal',
      'css_weight' => '800',
      'css_fallbacks' => '',
      'foundry' => 'ParaType',
      'foundry_url' => 'http://typekit.com/foundries/paratype',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"jxkf:n8";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"uow1lvc";}',
    ),
    'Futura PT Condensed Medium' => array(
      'name' => 'Futura PT Condensed Medium',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/futura-pt-condensed#n5',
      'provider' => 'typekit_api',
      'css_selector' => '',
      'css_family' => '\'futura-pt-condensed\'',
      'css_style' => 'normal',
      'css_weight' => '500',
      'css_fallbacks' => '',
      'foundry' => 'ParaType',
      'foundry_url' => 'http://typekit.com/foundries/paratype',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"jxkf:n5";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"uow1lvc";}',
    ),
    'Proxima Nova Semibold' => array(
      'name' => 'Proxima Nova Semibold',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/proxima-nova#n6',
      'provider' => 'typekit_api',
      'css_selector' => '',
      'css_family' => '\'proxima-nova\'',
      'css_style' => 'normal',
      'css_weight' => '600',
      'css_fallbacks' => '',
      'foundry' => 'Mark Simonson Studio',
      'foundry_url' => 'http://typekit.com/foundries/mark-simonson-studio',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"vcsm:n6";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"uow1lvc";}',
    ),
    'Source Sans Pro Bold' => array(
      'name' => 'Source Sans Pro Bold',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/source-sans-pro#n7',
      'provider' => 'typekit_api',
      'css_selector' => '',
      'css_family' => '\'source-sans-pro\'',
      'css_style' => 'normal',
      'css_weight' => '700',
      'css_fallbacks' => '',
      'foundry' => 'Adobe',
      'foundry_url' => 'http://typekit.com/foundries/adobe',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"bhyf:n7";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"uow1lvc";}',
    ),
    'Source Sans Pro Regular' => array(
      'name' => 'Source Sans Pro Regular',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/source-sans-pro#n4',
      'provider' => 'typekit_api',
      'css_selector' => '',
      'css_family' => '\'source-sans-pro\'',
      'css_style' => 'normal',
      'css_weight' => '400',
      'css_fallbacks' => '',
      'foundry' => 'Adobe',
      'foundry_url' => 'http://typekit.com/foundries/adobe',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"bhyf:n4";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"uow1lvc";}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function rlab_styles_image_default_styles() {
  $styles = array();

  // Exported image style: img-content-above.
  $styles['img-content-above'] = array(
    'name' => 'img-content-above',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '780',
          'height' => '380',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: img-content-below.
  $styles['img-content-below'] = array(
    'name' => 'img-content-below',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '780',
          'height' => '380',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: img-content-full-left.
  $styles['img-content-full-left'] = array(
    'name' => 'img-content-full-left',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '280',
          'height' => '280',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: img-content-full-right.
  $styles['img-content-full-right'] = array(
    'name' => 'img-content-full-right',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '280',
          'height' => '280',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: img-content-inset-left.
  $styles['img-content-inset-left'] = array(
    'name' => 'img-content-inset-left',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '230',
          'height' => '160',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: img-content-inset-right.
  $styles['img-content-inset-right'] = array(
    'name' => 'img-content-inset-right',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '230',
          'height' => '160',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: people-large.
  $styles['people-large'] = array(
    'name' => 'people-large',
    'effects' => array(
      15 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: people-thumb.
  $styles['people-thumb'] = array(
    'name' => 'people-thumb',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '140',
          'height' => '140',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: people-thumb-gray.
  $styles['people-thumb-gray'] = array(
    'name' => 'people-thumb-gray',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '140',
          'height' => '140',
        ),
        'weight' => '1',
      ),
      14 => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: poster-full.
  $styles['poster-full'] = array(
    'name' => 'poster-full',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '400',
          'height' => '518',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: poster-list-thumb.
  $styles['poster-list-thumb'] = array(
    'name' => 'poster-list-thumb',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '120',
          'height' => '165',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: profile-pic-thumbnail.
  $styles['profile-pic-thumbnail'] = array(
    'name' => 'profile-pic-thumbnail',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
