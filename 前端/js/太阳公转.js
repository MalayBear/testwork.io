var sun = document.querySelector('#sun')
var height = sun.offsetHeight / 2 + sun.offsetTop
var width = sun.offsetWidth / 2 + sun.offsetLeft
sun.style.transformOrigin = `${-width}px ${-height}px`

window.addEventListener('resize', () => {
  var height = sun.offsetHeight / 2 + sun.offsetTop
  var width = sun.offsetWidth / 2 + sun.offsetLeft
  sun.style.transformOrigin = `${-width}px ${-height}px`
})

