function getTime() {
    var date = new Date();
    var year = date.getFullYear(); //获取年份
    var month = date.getMonth() + 1; //获取月份,getMonth()返回值是0-11,所以要加1
    var day = date.getDate(); //获取日期
    var hour = date.getHours(); //获取小时
    hour = hour < 10 ? '0' + hour : hour;
    var minute = date.getMinutes(); // 获取分
    minute = minute < 10 ? '0' + minute : minute;
    return year + '年' + month + '月' + day + '日&nbsp;' + hour + ':' + minute  ;
}27
// 函数调用多次设置间隔一秒刷新一次
setInterval(function() {
    document.querySelector('.box').innerHTML = getTime();
}, 1000)