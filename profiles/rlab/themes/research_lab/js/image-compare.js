(function ($) {
	Drupal.settings.ic_images = Array();
	$(window).resize(function () {
		 var ic_height = $(".ic-container").height();
		 var ic_width = $(".ic-container").width();
		 var ic_right_bumper = 3;
		 var ic_left_bumper = 23;
		 $('.resizable').css('height', 'inherit').css('width', '50%');
		$( ".resizable" ).resizable({
		  maxHeight: ic_height,
		  maxWidth: ic_width - ic_right_bumper,
		  minHeight: ic_height,
		  minWidth: ic_left_bumper,
		  handles: 'e',
		});
		
 });
	$(document).ready(function(){
		 //$( ".resizable" ).resizable({
			//containment: ".ic-container"
		 //});
		 //var alsoResize = $( ".resize-handle" ).resizable( "option", "alsoResize" );
		 $(window).resize();
		 
		//make the li tabs full width
//			var group1_container_width = $('.ic-group-1').outerWidth();
//			var group1_li_count = $('.ic-group-1 li').length;
//			var group1_li_actualwidth = $('.ic-group-1 li').outerWidth();
//			var group1_li_width = $('.ic-group-1 li').width();
//			var group1_bumper = group1_li_actualwidth - group1_li_width;
//			var group1_bumper_total = group1_li_count * group1_bumper;
//			var group1_tab_size = (group1_container_width / group1_li_count) - group1_bumper_total;
//			
//			var group2_container_width = $('.ic-group-2').outerWidth();
//			var group2_li_count = $('.ic-group-2 li').length;
//			var group2_li_actualwidth = $('.ic-group-2 li').outerWidth();
//			var group2_li_width = $('.ic-group-2 li').width();
//			var group2_bumper = group2_li_actualwidth - group2_li_width;
//			var group2_bumper_total = group2_li_count * group2_bumper;
//			var group2_tab_size = (group2_container_width / group2_li_count) - group2_bumper_total;
//			
//			var group3_container_width = $('.ic-group-3').outerWidth();
//			var group3_li_count = $('.ic-group-3 li').length;
//			var group3_li_actualwidth = $('.ic-group-3 li').outerWidth();
//			var group3_li_width = $('.ic-group-3 li').width();
//			var group3_bumper = group3_li_actualwidth - group3_li_width;
//			var group3_bumper_total = group3_li_count * group3_bumper;
//			var group3_tab_size = (group3_container_width / group3_li_count) - group3_bumper_total;
		
		
		
		//$('ul.ic-group-1 li').css("width", (($("ul.ic-group-1 li.parent").width() / $("ul.ic-group-1 li").length ) -2) + "px");
		//if ( $('ul.ic-nav.ic-group-1 li').length > 1 ) {
		//var percent_width = Math.floor(100 / $('ul.ic-nav.ic-group-1 li').length);
		//var actual_width = Math.floor($('ul.ic-nav.ic-group-1 li').outerWidth(true) - $('ul.ic-nav.ic-group-1 li').width);
		//$('ul.ic-nav.ic-group-1 li').css('width', actual_width + "%");
		//}
		
		//check box class add
		$('.form-item-field-project-tag-term-tid .form-checkboxes .bef-checkboxes .form-type-bef-checkbox input').each(function() {
			var tag_checkbox = $(this);
			if(tag_checkbox.is(':checked')) {
				$(this).next().addClass('ic-tag-active');
				// do something here ...
			}
			
		});
		$('.form-item-field-location-tid .form-checkboxes .bef-checkboxes .form-type-bef-checkbox input').each(function() {
			var location_checkbox = $(this);
			if(location_checkbox.is(':checked')) {
				$(this).next().addClass('location ic-tag-active');
				// do something here ...
			}
			
		});
		//$('#' + id).is(":checked")
		//var boxes = $('input[name=thename]:checked');
		//$(boxes).each(function(){
   			//$(boxes).addClass('active-trail');
		//});	
		
		//Hide images and make the div backgrounds the image
		$('.ic-group-1 li').click(function(){
		  $(this).parent().parent().find('.ic-group-2 li, .ic-group-3 li, .ic-container').removeClass('ic-display-tab');
		  $(this).parent().parent().find('.ic-group-2 .' + $(this).attr('id')).addClass('ic-display-tab');
		  $(this).parent().parent().find('.ic-group-1 li').removeClass('active-trail');
		  //$(this).parent().parent().find('.ic-group-1 li').css('width', group1_tab_size);
		  $(this).addClass('active-trail');
		  var test =  $(this).parent().parent().find('.ic-group-2 li.ic-display-tab:first').click();
		  if (test.length == 0) {
			  var cur_item = $(this).attr('id').substr(8);
				$(this).parent().parent().find('.ic-container').addClass('ic-display-tab');
				$(this).parent().parent().find('.ic-image-before').css('background-image', 'url(' + Drupal.settings.ic_images[cur_item].before + ')');
				$(this).parent().parent().find('.ic-image-after').css('background-image', 'url(' + Drupal.settings.ic_images[cur_item].after + ')');
		  }
		});
		$('.ic-group-2 li').click(function(){
		  $(this).parent().parent().find('.ic-group-3 li, .ic-container').removeClass('ic-display-tab');
		  $(this).parent().parent().find('.ic-group-2 li').removeClass('active-trail');
		  $(this).addClass('active-trail');
		  //$(this).parent().parent().find('.ic-group-2 li').css('width', group2_tab_size);
		  $(this).parent().parent().find('.ic-group-3 .' + $(this).attr('id')).addClass('ic-display-tab');
		  var test = $(this).parent().parent().find('.ic-group-3 li.ic-display-tab:first').click();
		  if (test.length == 0) {
			  var cur_item = $(this).attr('id').substr(8);
				$(this).parent().parent().find('.ic-container').addClass('ic-display-tab');
				$(this).parent().parent().find('.ic-image-before').css('background-image', 'url(' + Drupal.settings.ic_images[cur_item].before + ')');
				$(this).parent().parent().find('.ic-image-after').css('background-image', 'url(' + Drupal.settings.ic_images[cur_item].after + ')');
		  }
		 
		});
		$('.ic-group-3 li').click(function(){
			var cur_item = $(this).attr('id').substr(8);
			$(this).parent().parent().find('.ic-container').addClass('ic-display-tab');
			$(this).parent().parent().find('.ic-group-3 li').removeClass('active-trail');
		  	$(this).addClass('active-trail');
			//$(this).parent().parent().find('.ic-group-3 li').css('width', group3_tab_size);
			$(this).parent().parent().find('.ic-image-before').css('background-image', 'url(' + Drupal.settings.ic_images[cur_item].before + ')');
			$(this).parent().parent().find('.ic-image-after').css('background-image', 'url(' + Drupal.settings.ic_images[cur_item].after + ')');
		    return cur_item;
		});
		// execute first run
		$('.ic-group-1').each(function(){
		  $(this).find('li:first').click();
	  });
	});
}(jQuery));