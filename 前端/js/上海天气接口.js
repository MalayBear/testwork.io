var key = "3fba0b1dbaf344c3adb5bb7e7e7318a6"; // 和风天气 API 的秘钥
var locationID = "121.47,31.23"; // 查询地区的经纬度
//var locationID = getLocationID('北京')
var url = "https://devapi.qweather.com/v7/grid-weather/3d?location=" + locationID + "&key=" + key;
var httpRequest = new XMLHttpRequest();

httpRequest.onreadystatechange = function() {
    if (httpRequest.readyState == 4 && httpRequest.status == 200) {
        var json = httpRequest.responseText;
        var obj = eval("(" + json + ")");
        var tempM2 = obj.daily[2].tempMax;
        var tempMin2 = obj.daily[2].tempMin;
        var weatherTempSpanM2 = document.getElementById("weather-tempC");
        var weatherTempSpanMin2 = document.getElementById("weather-reportC");
        weatherTempSpanM2.innerHTML = tempM2 + "℃";
        weatherTempSpanMin2.innerHTML = tempMin2 + "℃"
    }
};

httpRequest.open("GET", url, true);
httpRequest.send();