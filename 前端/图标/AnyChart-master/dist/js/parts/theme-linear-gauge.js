if(!_.theme_linear_gauge){_.theme_linear_gauge=1;(function($){$.ra($.fa.anychart.themes.defaultTheme,{linearGauge:{padding:10,markerPalette:{items:"circle diamond square triangle-down triangle-up triangle-left triangle-right diagonal-cross pentagon cross v-line star5 star4 trapezium star7 star6 star10".split(" ")},globalOffset:"0%",layout:"vertical",tooltip:{titleFormat:function(){return this.name},format:function(){return this.high?$.NN.call(this):"Value: "+$.yN(this.value)}},scales:[{type:"linear"}],defaultAxisSettings:{enabled:!0,width:"10%",offset:"0%"},
defaultScaleBarSettings:{enabled:!0,width:"10%",offset:"0%",from:"min",to:"max",colorScale:{type:"ordinal-color",inverted:!1,ticks:{maxCount:100}},points:[{height:0,left:0,right:0},{height:1,left:0,right:0}]},defaultPointerSettings:{base:{enabled:!0,selectionMode:"single",width:"10%",offset:"0%",legendItem:{enabled:!0},normal:{stroke:$.KN,fill:$.CN,hatchFill:null,labels:{zIndex:0,position:"center-top"}},hovered:{stroke:$.MN,fill:$.IN,labels:{enabled:null}},selected:{stroke:$.HN,fill:$.HN,labels:{enabled:null}}},
bar:{},rangeBar:{normal:{labels:{format:function(){return $.yN(this.high)}}}},marker:{width:"3%"},tank:{normal:{emptyFill:"#fff 0.3",emptyHatchFill:null},hovered:{emptyFill:$.CN},selected:{emptyFill:$.CN}},thermometer:{normal:{fill:function(){var a=this.sourceColor,b=$.Rl(a);return{angle:this.isVertical?0:90,keys:[{color:b},{color:a},{color:b}]}}},width:"3%",bulbRadius:"120%",bulbPadding:"3%"},led:{dimmer:function(a){return $.Rl(a)},gap:"1%",size:"2%",count:null,colorScale:{type:"ordinal-color",inverted:!1,
ticks:{maxCount:100}}}}},thermometer:{},tank:{},led:{}});}).call(this,$)}
