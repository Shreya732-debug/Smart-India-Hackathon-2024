let currentSlide = 0;



function showSlide(index) {
  const slides = document.querySelectorAll('.carousel-item');
  const totalSlides = slides.length;
  if (index >= totalSlides) {
    currentSlide = 0;
  }


  if (index < 0) {
    currentSlide = totalSlides - 1;
  } else {
    currentSlide = index;
  }
  const newTransformValue = `translateX(-${currentSlide * 100}%)`;
  document.querySelector('.carousel-inner').style.transform = newTransformValue;
}




function nextSlide() {
  showSlide(currentSlide + 1);
}
function prevSlide() {
  showSlide(currentSlide - 1);
}



setInterval(nextSlide, 5000);