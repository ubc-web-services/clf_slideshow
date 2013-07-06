(function ($) {
	$(document).ready(function () {
		$('.carousel-inner > .item')
			.eq(0).addClass('active').end();
		$('.ubc-carousel').ubc_spotlight({
			//interval: 5000,
			pause: 'hover'
		});
	});
})(jQuery);