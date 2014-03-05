(function($) {
  Drupal.behaviors.ottawa_toc_float = {
    attach: function(context, settings) {
        // Make the waypoints fire more smoothly. Default is 30ms.
        $.waypoints.settings.scrollThrottle = 10;

        // Drupal adds top padding to the body for admins.
        var bodyPadding = parseInt($('body').css('paddingTop'));

    	/* sticky ToC */
    	var navContainer = $('.simple-toc');
    	var navFloat = $('.simple-toc .item-list');
        var footer = $('#footer');
        var tocOffset = bodyPadding + 80;

        // Add a waypoint to fire on the container of the ToC.
    	navContainer.waypoint({
    		handler: function(event, direction) {
                if (direction == 'down') {
                    navContainer.css('height', navFloat.outerHeight());
                } else {
                    navContainer.css('height', 'auto');
                }

    			navFloat.toggleClass('sticky', direction=='down');

			    if (navFloat.hasClass('sticky')) {
                    navFloat.css({
                        'top' : tocOffset,
                        'width' : navContainer.width()
                    });
			    } else {
                    navFloat.css({
                        'top' : 'auto',
                        'width' : 'auto'
                    });
			    }
  			},
            offset: tocOffset
    	});

        // Add a waypoint to the footer so that the ToC doesn't overlap.
        footer.waypoint({
            handler: function(event, direction) {
                navFloat.toggleClass('bottomed', direction=='down');
                if (direction === 'down') {
                    navFloat.css('right', parseInt($('#content').css('paddingRight')));
                } else {
                    navFloat.css('right', 'auto');
                }
            },
            offset: tocOffset + navFloat.outerHeight() + parseInt($('#main').css('paddingBottom'))
        });

        /* end sticky ToC */

        /* ToC section highlighting */
    	var sections = $('.field-name-body h2');
    	var navigationLinks = $('ol.compendium li a');
        var secOffset = bodyPadding + 20;

        sections.waypoint({
            handler: function(event, direction) {
                var activeSection = $(this);

                if (direction == 'up') {
                    for (var i=1;i<sections.length;i++) {
                        if ($(sections[i]).get(0) === $(activeSection).get(0)) {
                            activeSection = sections.eq(i-1);
                            break;
                        }
                    }
                }

                var activeLink = $('ol a[href="' + window.location.pathname + '#' + activeSection.attr('id') + '"]');

                navigationLinks.removeClass('selected');
                activeLink.addClass('selected');
            },
            offset: secOffset
        });
        /* end ToC section highlighting */

        /* ToC scroll to section */
        var mainNavH = 0;

        // Check to see if there's a sticky menu element.
        if (Drupal.settings.portalZen && (Drupal.settings.portalZen.stickyNav && Drupal.settings.portalZen.stickyNav == 1) && Drupal.settings.portalZen.navSelector) var mainNav = $(Drupal.settings.portalZen.navSelector);
        if (mainNav) mainNavH = mainNav.outerHeight();

    	navigationLinks.click(function(event) {
    		$.scrollTo(
    			$(this).attr('href'),
    			{
    				duration: 200,
    				offset: { 'left': 0, 'top': -(secOffset + mainNavH - 10) }
    			}
    		);
    	});
        /* end ToC scroll to section */
    }
  };
}(jQuery));
