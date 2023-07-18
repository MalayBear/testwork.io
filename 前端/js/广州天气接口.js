var key = "3fba0b1dbaf344c3adb5bb7e7e7318a6"; // 和风天气 API 的秘钥
 var locationID = "113.23,23.16"; // 查询地区的经纬度
// var locationID = getLocationID('广州')
var url = "https://devapi.qweather.com/v7/grid-weather/3d?location=" + locationID + "&key=" + key;
var httpRequest = new XMLHttpRequest();

httpRequest.onreadystatechange = function() {
    if (httpRequest.readyState == 4 && httpRequest.status == 200) {
        var json = httpRequest.responseText;
        var obj = eval("(" + json + ")");
        var tempM = obj.daily[0].tempMax;
        var tempMin = obj.daily[0].tempMin;
        var weatherTempSpanM = document.getElementById("weather-temp");
        var weatherTempSpanMin = document.getElementById("weather-report");
        weatherTempSpanM.innerHTML = tempM + "℃";
        weatherTempSpanMin.innerHTML = tempMin + "℃"
    }
};

httpRequest.open("GET", url, true);
httpRequest.send();