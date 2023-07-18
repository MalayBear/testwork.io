var data = [10, 20, 30, 40, 50, 60,70] 
var yAxisData =[10, 30, 50, 70,80,100,120]//数据
var chartContainer = document.getElementById("chart")
var xAxis = document.querySelector(".x-axis")
var yAxis = document.querySelector(".y-axis")
for (let i = 0; i < yAxisData.length; i++) {
var span = document.createElement("span")
span.innerText = yAxisData[i]
yAxis.appendChild(span)
}
//绘制柱状图
for (let i = 0; i <  data.length; i++) {
var bar = document.createElement("div") //创建柱形图
bar.classList.add("bar") //为柱形图添加类名
bar.style.height = `${data[i]}px`
// bar.style.left = `${i * 100}px`
 //设置柱形图高度

//添加数据标签
const dataLabel = document.createElement("div")
dataLabel.classList.add("data-label")
dataLabel.innerText = data[i]
bar.appendChild(dataLabel)

//添加鼠标悬停事件
//鼠标悬停的事件监听器,"mouseover" 则是一个表示鼠标悬停事件的字符串参数
bar.addEventListener("mouseover", () => {
dataLabel.style.display = "block"
})

//添加鼠标移出事件
bar.addEventListener("mouseout", () => {
dataLabel.style.display = "none"
})

chartContainer.appendChild(bar) //将柱形图添加到容器中
}
//在x轴添加名字
var xLabel = document.createElement("div")
xLabel.innerText = "  "
xLabel.style.position = "absolute"
xLabel.style.bottom = "0"
xLabel.style.left = "400"
xLabel.style.right = "0"
// 将 x 轴容器添加到图表容器中
chartContainer.appendChild(xLabel)

//在y轴添加名字
var yLabel = document.createElement("div")
yLabel.innerText = "降雨量/mm"
yLabel.style.position = "absolute"
yLabel.style.top = "0"
yLabel.style.left = "0"
// yLabel.style.transform = "rotate(-90deg)"
yLabel.style.transformOrigin = "left bottom"
chartContainer.appendChild(yLabel)
chart.render();