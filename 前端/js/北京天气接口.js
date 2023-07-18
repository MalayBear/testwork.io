
var key = "3fba0b1dbaf344c3adb5bb7e7e7318a6"; // 和风天气 API 的秘钥
var locationID = "116.38,39.90"; // 查询地区的经纬度
//var locationID = getLocationID('北京')
var url = "https://devapi.qweather.com/v7/grid-weather/3d?location=" + locationID + "&key=" + key;
var httpRequest = new XMLHttpRequest();

httpRequest.onreadystatechange = function() {
    if (httpRequest.readyState == 4 && httpRequest.status == 200) {
        var json = httpRequest.responseText;
        var obj = eval("(" + json + ")");
        var tempM1 = obj.daily[1].tempMax;
        var tempMin1 = obj.daily[1].tempMin;
        var weatherTempSpanM1 = document.getElementById("weather-tempB");
        var weatherTempSpanMin1 = document.getElementById("weather-reportB");
        weatherTempSpanM1.innerHTML = tempM1 + "℃";
        weatherTempSpanMin1.innerHTML = tempMin1 + "℃"
    }
};

httpRequest.open("GET", url, true);
httpRequest.send();