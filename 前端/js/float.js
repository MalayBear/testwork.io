
//定义一片雪花模板
function snows() {
  var snow = document.createElement('div');
  snow.innerHTML = "❄";
  snow.style.color = "#fff";
  snow.style.position = "absolute";

  //获取页面宽度和高度
  var W = window.innerWidth;
  var H = window.innerHeight;

  //开启一个定时器，每隔一段时间生成一片雪花
  var timer = setInterval(function () {
    //定义雪花出生的位置
    var start = Math.random() * W;

    //定义雪花结束的位置
    var finish = Math.random() * W;

    //定义每片雪花的大小
    var snowSize = 10 + Math.random() * 20;

    //定义雪花下落的时间
    var duringTime = 20000;

    //雪花旋转
    var rotate = 20 + Math.random() * 20;

    //克隆一个雪花模板
    var cloneSnow = snow.cloneNode(true);

    //改变新生成的雪花的样式
    cloneSnow.style.cssText += `left:${start}px;font-size:${snowSize}px;top:-25px;transition:${duringTime}ms`;

    //添加到页面中
    document.body.appendChild(cloneSnow);

    //生成一个一次性定时器，改变结束时的样式
    var timer1 = setTimeout(function () {
      cloneSnow.style.cssText += `left:${finish}px;top:${H}px;transform:rotateX(${rotate}deg)`;

      //开启一个一次性定时器清除落地的雪花
      setTimeout(function () {
        cloneSnow.remove();
      }, duringTime)
    }, 0)
  }, 100)
}
//调用函数
snows();
