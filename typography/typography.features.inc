<?php
/**
 * @file
 * typography.features.inc
 */

/**
 * Implements hook_fontyourface_features_default_font().
 */
function typography_fontyourface_features_default_font() {
  return array(
    'EB Garamond regular (latin)' => array(
      'name' => 'EB Garamond regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=EB Garamond&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'p, div',
      'css_family' => 'EB Garamond',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => 'TimesNewRoman, “Times New Roman”, Times, Baskerville, Georgia, serif;',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"EB Garamond:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Ultra regular (latin)' => array(
      'name' => 'Ultra regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ultra&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => '.navbar-brand',
      'css_family' => 'Ultra',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '"Courier New Bold","Courier New",Courier',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Ultra:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}
