var moon = document.querySelector('#moon');
var height = window.innerHeight / 2;
var width = window.innerWidth / 2;
moon.style.transformOrigin = `${-width}px ${-height}px`;

window.addEventListener('resize', () => {
    var height = window.innerHeight / 2;
    var width = window.innerWidth / 2;
    moon.style.transformOrigin = `${-width}px ${-height}px`;
});