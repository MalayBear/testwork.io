//3.翻页
function choose(type) {
  // var login = document.getElementsByClassName("chooseLogin")[0]
  var register = document.getElementsByClassName("chooseRegister")[0]
  var loginform = document.getElementsByClassName("loginBox")[0]
  var registerform = document.getElementsByClassName("register")[0]

if (type=='register') {
  loginform.style.display="none"
  register.style.display ="none"
  registerform.style.display="block"
  //将两个表单其中一个隐藏起来
}
else{
  loginform.style.display="block"
  register.style.display ="block"
  registerform.style.display="none"
}
}
//4，登录页面函数调用
function login() {
  var nameEl =document.getElementsByClassName("loginUserName")[0]
  var psdEl =document.getElementsByClassName("loginPassword")[0]

//5，去除空格
var name =nameEl.value.trim()
var psd=psdEl.value.trim()
if( name.length<5||name.length>15)
{
  alert("账号长度有误")
}
else if(psd.length<6||psd.length>15)
{
  alert("密码长度有误")
}
else
{
  window.location.href="../天气预报界面index.html?username="+name+"&password="+psd
}
}
//注册页面函数调用
function register() {
  var nameEl = document.getElementsByClassName("registerUserName")[0]
  var psdEl1 = document.getElementsByClassName("registerPassword")[0]
  var psdEl2 = document.getElementsByClassName("registerPassword2")[0]
//消除空格
  var name = nameEl.value.trim()
  var psd1 = psdEl1.value.trim()
  var psd2 = psdEl2.value.trim()
  if(name.length<5||name.length>15)
  {
    alert("用户名长度有误")
  }
  else if(psd1.length<6||psd1.length>15)
  {
    alert("密码长度有误")
  }
  else if (psd1!=psd2) 
  {
      alert("输入的密码与上次不一致")
       //确认密码
  }
  else
  {
    window.location.href="../天气预报界面index.html?username="+name+"&password="+psd1
  }
 

}