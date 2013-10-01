(function($) {
  Drupal.behaviors.ottawa_toc_float = {
    attach: function(context, settings) {
    	// Do our DOM lookups beforehand
    	var nav_container = $(".pane-simple-toc-simple-toc");
    	var nav = $(".toc-wrapper");

    	nav_container.waypoint({
    		handler: function(event, direction) {
    			nav.toggleClass('sticky', direction=='down');
			    
			    if (nav.hasClass('sticky')) {
			      nav.css({'width': nav_container.width() - 5});
			    }
			    else {
			      nav.css({'width': 'auto'});
			    }
    			if (direction == 'down') {
    			  nav_container.css({ 'height':nav.outerHeight() });
  			  }
    			else nav_container.css({ 'height':'auto' });
    		},
    		offset: 40
    		//offset: 40

    	});
	
    	var sections = $(".field-name-body h1 a, .field-name-body h2 a, .field-name-body h3 a");
    	var navigation_links = $("ol a");
	
    	sections.waypoint({
    		handler: function(event, direction) {
		
    			var active_section;
    			active_section = $(this);
    			if (direction === "up" && active_section.parent('h1, h2, h3').prevAll('h1, h2, h3').length != 0) {
            active_section = active_section.parent('h1, h2, h3').prevAll('h1, h2, h3').children('a');
    			}

    			var active_link = $('ol a[href="#' + active_section.attr("id") + '"]');
    			navigation_links.removeClass("selected");
    			active_link.addClass("selected");

    		},
    		offset: 20
    		//offset in px for when before the anchor to highlight menu

    	})
	
	
    	navigation_links.click( function(event) {

    		$.scrollTo(
    			$(this).attr("href"),
    			{
    				duration: 200,
    				offset: { 'left':0, 'top':0 }
    			}
    		);
    	});
    }
  };
}(jQuery));
