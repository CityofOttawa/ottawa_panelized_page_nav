(function($) {
  Drupal.behaviors.ottawa_toc_float = {
    attach: function(context, settings) {
    	// Do our DOM lookups beforehand
    	var nav_container = $(".pane-simple-toc-simple-toc");
    	var nav = $("toc.wrapper");

    	nav_container.waypoint({
    		handler: function(event, direction) {
    			nav.toggleClass('sticky', direction=='down');
			
    			if (direction == 'down') nav_container.css({ 'height':nav.outerHeight() });
    			else nav_container.css({ 'height':'auto' });
    		},
    		offset: 40
    	});
	
    	var sections = $(".field-name-body h2 a");
    	var navigation_links = $("ol a");
	
    	sections.waypoint({
    		handler: function(event, direction) {
		
    			var active_section;
    			active_section = $(this);
    			if (direction === "up") active_section = active_section.prev();

    			var active_link = $('ol a[href="#' + active_section.attr("id") + '"]');
    			navigation_links.removeClass("selected");
    			active_link.addClass("selected");

    		},
    		offset: '35%'
    	})
	
	
    	navigation_links.click( function(event) {

    		$.scrollTo(
    			$(this).attr("href"),
    			{
    				duration: 200,
    				offset: { 'left':0, 'top':-0.15*$(window).height() }
    			}
    		);
    	});
    }
  };
}(jQuery));
