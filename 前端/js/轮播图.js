var left = document.getElementsByClassName("prev")
var right = document.getElementsByClassName("next")
var item = document.getElementsByClassName("swiper-item")
var i = item.length-1
function enter()
{   
    left[0].style.display=right[0].style.display ="block" 
}
function leave()
{

    left[0].style.display=right[0].style.display ="block"  
}

//定义i的数值函数
function iControll()
{
    
    if(i < 0)
    {
        i = item.length-1
    }
    else if(i > item.length-1)
    {
        i=0
    }
}

function prev()
{   iControll()
    item[i].style.display = "none"
    i--
    iControll()
    item[i].style.display ="block"
    iControll()
}
function next()
{
    iControll()
    item[i].style.display = "none"
    i++
    iControll()
    item[i].style.display ="block"
    iControll()
}

timer = setInterval(function()
{
    next();
},3000)