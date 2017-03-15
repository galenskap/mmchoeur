(function ($) {
  Drupal.quickbar = Drupal.quickbar || {};
  
  Drupal.quickbar.setActive = function(toolbar_id) {
    // Show the right toolbar
    $('#quickbar .depth-1 ul.links').addClass('collapsed');
    $(toolbar_id).removeClass('collapsed');
    $('div#quickbar, div#quickbar .depth-1').removeClass('collapsed');
  
    // Switch link active class to corresponding menu item
    var link_id = toolbar_id.replace('quickbar', 'quickbar-link');
    $('#quickbar .depth-0 ul.links a').removeClass('active');
    $(link_id).addClass('active');

    $('#quickbar').addClass('quickbar-open');
  }
  
  Drupal.behaviors.quickbar = {
    attach: function (context, settings) {
      // Move the toolbar to underneath body.
      // TODO: I'm not sure that these lines are necessary anymore
      // since we put this in page_top in D7?!
      var toolbarHtml = $('#quickbar').remove();
      $('body').prepend(toolbarHtml);
      
      // Primary menus
      $('#quickbar .depth-0 ul.links a:not(.processed)').each(function() {
        var target = $(this).attr('id');
        if (target) {
          // Build a new id to check for a corresponding secondary menu...
          target = '#'+ target.replace('quickbar-link', 'quickbar');
          if ($(target, '#quickbar').size() > 0) {
            // If secondary menu should show on page load AND
            // if this link (in .depth-0) is active...show this toolbar on setup
            if (Drupal.settings.quickbar.secondary_menu_visibility && $(this).parent().is('.active-trail')) {
              Drupal.quickbar.setActive(target);
            }
            // Add click handler
            $(this).click(function() {
              if ($(this).is('.active')) {
                // Follow the link
                if (!$('#quickbar').hasClass('primary-nofollow')) {
                  window.location = $(this).attr('href');
                  return true;
                }
                return false;
              }
              // Open submenu
              Drupal.quickbar.setActive(target);
              return false;
            });
          }
        }
        $(this).addClass('processed');
      });
      
      // Close button
      $('#quickbar .depth-1 span.close:not(.processed)').each(function() {
        $(this).click(function() {
          $('#quickbar .depth-1').addClass('collapsed');
          $('#quickbar-admin a.active').removeClass('active');
          $('#quickbar').removeClass('quickbar-open');
          return false;
        });
        $(this).addClass('processed');
      });
      
      // Secondary menus
      var secondary = $('#quickbar .depth-1');
      // If we want to hide the secondary menu on page load them we need
      // to add the collapse class to the secondary wrapper.
      if (!Drupal.settings.quickbar.secondary_menu_visibility) {
        secondary.addClass('collapsed');
      }
      
      secondary.find('ul.links:not(.processed)').each(function() {
        $(this).addClass('processed');
      });
    }
  };
})(jQuery);