
anychart.onDocumentReady(function() {
  // 创建数据表
  var data = anychart.data.set([
    ["1:00", 12],
    ["2:00", 14],
    ["3:00", 32],
    ["4:00", 41],
    ["5:00", 11],
    ["6:00", 30],
    ["7:00", 70],
    ["8:00", 62],
    ["9:00", 90],
    ["10:00", 93],
    ["11:00", 80],
    ["12:00", 81],
    ["13:00", 81],
    ["14:00", 81],
    ["15:00", 81],
    ["16:00", 21],
    ["17:00", 39],
    ["18:00", 50],
    ["19:00", 81],
    ["20:00", 81],
    ["21:00", 81],
    ["22:00", 81],
    ["23:00", 81],
    ["24:00", 81],


  ]);
  
  // 创建图表
  var WeatherChart = anychart.line();

  // 添加数据
  var WeatherSeries = WeatherChart.line(data);

  // 配置图表标题
  WeatherChart.title("一天天气变化");

  // 配置 X 轴标题
  WeatherChart.xAxis().title("时间");

  // 配置 Y 轴标题
  WeatherChart.yAxis().title("温度");

  // 配置图表内部边距
  WeatherChart.padding([10,20,5,20]);

  // 配置背景色
  WeatherChart.background().fill("#fafafa");

  // 设置容器并绘制图表
  WeatherChart.container("Curve").draw();
});


