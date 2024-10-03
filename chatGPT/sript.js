const slider = document.querySelector('.slider');
const slides = document.querySelectorAll('.slide');
const slideWidth = slides[0].offsetWidth;
let slideIndex = 0;

// Set the initial position of each slide
slides.forEach((slide, index) => {
	slide.style.left = `${slideWidth * index}px`;
});

// Move the slider to the next slide
function moveToNextSlide() {
	slideIndex++;
	if (slideIndex > slides.length - 1) {
		slideIndex = 0;
	}
	slider.style.transform = `translateX(${-slideWidth * slideIndex}px)`;
}

// Automatically move the slider to the next slide every 3 seconds
setInterval(moveToNextSlide, 3000);
