// JavaScript Document
function openBio(a)
{
  // if another bio is active, send it to the kill function to close it
  if ( a.siblings("div.people-profile-list").hasClass("people-profile-active"))
  {
    kill(a.siblings("div.people-profile-list.people-profile-active"));
    console.log('removing active class from siblings');  
  }
  console.log('opening active profile');  
  a.removeClass("people-profile-collapsed").addClass("people-profile-active");              
  a.removeClass("out-focus");
  a.siblings("div.people-profile-list.people-profile-collapsed").addClass("out-focus");
  a.siblings("div.people-profile-list").children("div.views-field-picture-1.profile-thumb").css("display", "block");
  a.siblings("div.people-profile-list").children("div.views-field-picture.profile-large").css("display", "none");
  a.children("div.views-field-picture.profile-large").css("display", "block");
  a.children("div.views-field-picture-1.profile-thumb").css("display", "none");
  a.children(".people-profile-list .views-field-field-about").css("display", "block");
  a.children("div.kill-profile-btn").css("display", "block");
                   
  //var photoOffset = a.offset().top - $("#content").offset().top;
  //a.children("div.views-field-field-people-photo-fid-1").appendTo("div.region-sidebar-first .section").css("display", "block").css("marginTop", photoOffset);
  //a.children("div.views-field-field-website-url").css("display", "block");
  //var closeOffset = 0 - ($('#content').height() - (photoOffset + a.height()));
  //$("div.kill-profile-btn").css("top", closeOffset);
  //$("div.people-index-quicklist").css("display" ,"none");              
}
           
// closes any bio currently open
function kill( a)
{
  console.log('removing active class from selected bio');  
  a.removeClass("people-profile-active").addClass("people-profile-collapsed");  
  a.children(".people-profile-list .views-field-field-about").css("display", "none");        
  a.children("div.views-field-picture-1.profile-thumb").css("display", "block");
  //a.children("div.people-profile-list").children("div.views-field-picture.profile-large").appendTo(a).css("display", "none");
  a.children("div.kill-profile-btn").css("display", "none");
  //a.children("div.views-field-field-website-url").css("display", "none");      
}
                 
// close button event
function killbutton(a)
{
  console.log('kill me button was clicked');
  a.removeClass("people-profile-active").addClass("people-profile-collapsed");
  a.children(".people-profile-list .views-field-field-about").css("display", "none");  
  a.children("div.views-field-picture.profile-large").css("display", "none");
  a.children("div.views-field-picture-1.profile-thumb").css("display", "block");
  a.children(".people-profile-list").removeClass("out-focus");
  a.children("div.kill-profile-btn").css("display", "none");              
  //a.children("div.views-field-picture.profile-thumb").css("display", "block");
  //a.children("div.views-field-picture.profile-large").appendTo(a).css("display", "none");
  //a.children("div.views-field-field-website-url").css("display", "none");                      
  //$("div.people-index-quicklist").css("display", "block");            
}
(function ($) {
$(document).ready(function(){      
    //hide body contents on initialization
    //hide it here so it degrades nicely if javascript is disabled
    $(".people-profile-list .views-field-field-about").css("display","none");
    $(".people-profile-list .views-field-field-about").addClass("js-enabled");
        //$(".view.people-index .views-row .views-field-field-website-url").addClass("js-enabled");
 
    //$(".view.people-index .views-row .views-field-field-website-url").css("display","none");
   
                 
    // add clearfix and collapsed marker to every row
    //$(".view.people-index .view-content").children(".views-row").addClass("clearfix people-collapsed");
   
    // and collapsed marker to every row
    $(".view.view-people .view-content").children(".people-profile-list").addClass("people-profile-collapsed");          
   
    // add a close button to every row
    //$(".view.view-people .view-content .people-profile-list").prepend("<div class='kill-profile-btn'>Close</div>");
                                 
                 
    // change color on hover
    $(".view.view-people .view-content .people-profile-list.people-profile-collapsed").hover(
    function(){
      $(this).addClass("hover");
    },
    function(){
      $(this).removeClass("hover");
    });
                  
    // jump to quicklist.  Scroll to entry and then open it using openBio function
    $(".scroll").click(function(event){    
      event.preventDefault();
      $('html,body').animate({scrollTop:$(this.hash).offset().top}, 300, openBio($(this.hash).closest('.views-row')));
    });
                    
    // expand bio when clicked (kill function closes any other active)
    $(".view.view-people .view-content .people-profile-list.people-profile-collapsed").click(function(){
      if (!($(this).hasClass('people-profile-active'))) {
        openBio($(this));
        $('.kill-profile-btn').remove();
        $('.people-profile-active').before("<div class='kill-profile-btn'>Close</div>");
      }
                               
    });
               
    // close open bio when close button is clicked
    $(".kill-profile-btn").click(function(){
      killbutton($(".view.view-people .view-content .people-profile-list.people-profile-active"));
      console.log('opening active profile');
      $('.kill-profile-btn').remove();
    });      
});
})(jQuery);