if(!_.surface){_.surface=1;(function($){var T5=function(a,b){a*=Math.PI/180;b*=Math.PI/180;var c=Math.sin(a),d=Math.cos(a),e=Math.sin(b),f=Math.cos(b);return[d*f,-c*f,e,c,d,0,-e*d,c*e,f]},U5=function(a,b){return[b[0]*a[0]+b[1]*a[1]+b[2]*a[2],b[0]*a[3]+b[1]*a[4]+b[2]*a[5],b[0]*a[6]+b[1]*a[7]+b[2]*a[8]]},V5=function(a,b){var c=U5(T5(0,a),[-1,0,0]),d=c[0],e=c[1];c=c[2];for(var f=d*d+e*e+c*c,h=0,k=0;k<b.length;k++){var l=b[k];h+=Math.abs(d*l[0]+e*l[1]+c*l[2]-f)/Math.sqrt(f)}return h/=b.length},yra=function(a,b){var c=a[0],d=a[1],e=a[2],f=c*
c+d*d+e*e;return Math.abs(c*b[0]+d*b[1]+e*b[2]-f)/Math.sqrt(f)},W5=function(a,b){a=a.slice();a[1]=b.left+a[1]*b.width/1.48+b.width/2;a[2]=b.top+a[2]*b.height/1.75+b.height/2;return a},X5=function(a,b){a=a.slice();for(var c=0;c<a.length;c++)a[c]=W5(a[c],b);return a},Y5=function(){$.kz.call(this);this.G=null;this.P={AY:[],IT:[]};this.ba=!1},Z5=function(a){if(0==a.P.IT.length){var b=$.rk();b.parent(a.O()).zIndex(a.zIndex());b.stroke("none");a.P.AY.push(b);return b}b=a.P.IT.pop();a.P.AY.push(b);b.parent(a.O());
return b},zra=function(a,b){return $.n(b)?(a.ba=!!b,a):a.ba},$5=function(a){a.G=a.G?a.G:$.rk();return a.G},Ara=function(a,b){var c=a.ja(),d=T5(a.K,a.i),e=[];e[0]=U5(d,b[0]);e[1]=U5(d,b[1]);if(V5(a.i,[e[0]])>V5(a.i,[e[1]])){var f=b[1];b[1]=b[0];b[0]=f;f=e[1];e[1]=e[0];e[0]=f}b[2]=[b[1][0],b[1][1],-.5];e[2]=U5(d,b[2]);c=X5(e,c);a.j.moveTo(c[0][1],c[0][2]);a.j.lineTo(c[1][1],c[1][2]);a.G.moveTo(c[1][1],c[1][2]);a.G.lineTo(c[2][1],c[2][2])},a6=function(){$.Qy.call(this);this.D=[];this.P=[]},Bra=function(a,
b,c){var d=a.D.slice(),e=a.P.slice(),f=a.g("length"),h=a.g("stroke"),k=$.ip(h),l=d[0]*(1-b)+b*e[0];b=d[1]*(1-b)+b*e[1]+c/2;b=$.R(b,1)-.5;l=$.R(l,k);a.path.moveTo(l,b);a.path.lineTo(l,b+f);a.path.stroke(h)},b6=function(){$.Sy.call(this);this.b=[[-.5,-.5,.5],[-.5,.5,.5],[.5,.5,.5],[.5,-.5,.5]];this.f=[]},c6=function(a){a.f=T5(a.K,a.i)},Cra=function(a){c6(a);for(var b=[],c=[0,0,0],d=[0,0,0],e=0;e<a.b.length;e++){var f=a.b[e];b.push(U5(a.f,f));b[e][1]<d[1]&&(c=f,d=b[e])}return c},d6=function(a,b,c,d){b=
U5(a.f,b);c=U5(a.f,c);a.D=b.slice();a.P=c.slice();var e=X5([b,c],d),f=e[0][1],h=e[0][2];d=e[1][1];e=e[1][2];b=a.zIndex()+2-V5(a.i,[b,c]);c=a.Az();c.clear();c.moveTo(f,h).lineTo(d,e);c=a.Xa();a=a.yb();$.Ar(c,a);var k=[f,h],l=[d,e];$.n(k)&&$.n(l)&&(c.D=k,c.P=l,c.wa(1));c.zIndex(b);f=[f,h];d=[d,e];$.n(f)&&$.n(d)&&(a.D=f,a.P=d,a.wa(1));a.zIndex(b);$.Br(c,a)},e6=function(){b6.call(this)},Dra=function(a,b,c){var d=a.ja(),e=a.Ut()?a.b[0]:a.KG(),f=[-.5==e[0]?.5:-.5,e[1],e[2]];if(-.5==f[0]){var h=e;e=f;f=
h}e=U5(a.f,e);f=U5(a.f,f);a=X5([e,f],d);return{x:a[0][1]*(1-b)+b*a[1][1],y:a[0][2]*(1-b)+b*a[1][2]+c}},f6=function(){b6.call(this)},Era=function(a,b,c){var d=a.ja(),e=a.Ut()?a.b[0]:a.KG(),f=[e[0],-.5==e[1]?.5:-.5,e[2]];if(-.5==f[1]){var h=e;e=f;f=h}e=U5(a.f,e);f=U5(a.f,f);a=X5([e,f],d);return{x:a[0][1]*(1-b)+b*a[1][1],y:a[0][2]*(1-b)+b*a[1][2]+c}},g6=function(){b6.call(this)},Fra=function(a,b,c){var d=a.ja(),e=a.Ut()?a.b[0]:Cra(a),f=[e[0],e[1],-.5];e=U5(a.f,e);f=U5(a.f,f);a=X5([e,f],d);d=a[0][2];
e=a[1][2];f=Math.abs(d-e);return{x:a[0][1]+c,y:Math.min(d,e)+f-f*b}},h6=function(a,b){$.Y.call(this);this.ib=a;this.f=b;this.Na=$.pk();this.Sc=$.rk();this.Sc.zIndex(2);this.f.O(this.Na);this.Sc.parent(this.Na);this.Sc.va("mousemove",this.rq,!1,this);this.Sc.va("mouseout",this.rq,!1,this);this.Sc.va("mouseover",this.rq,!1,this)},i6=function(a){$.Y.call(this);this.ib=a;this.Sc=$.rk();this.Sc.zIndex(1)},j6=function(){$.V.call(this);this.ua={};$.T(this.ua,[["enabled",0,32768],["stroke",0,8192]])},k6=
function(a){$.Y.call(this);this.pa=a;this.Bc=[];this.Zc={x:[0,"x"],y:[1,"y"],z:[2,"z"]};this.Na=$.pk();$.T(this.ua,[["enabled",0,1],["size",0,1],["fill",0,1],["stroke",0,1],["type",0,1]])},Gra=function(a,b,c){var d=b.data(),e=U5(a.pa.Xg,l6(a.pa,d)),f=W5(e,c);f&&(b.b=f);b.zIndex(yra(a.pa.l0,e));d=U5(a.pa.Xg,l6(a.pa,[d[0],d[1],a.pa.Zu().uh()]));c=W5(d,c);a.ZL();b.f.b={from:f,Ke:c}},Hra=function(a){if(!a.Bc.length&&a.la)for(var b=a.la.$();b.advance();){var c=+b.get("x"),d=+b.get("y"),e=+b.get("z");(0,window.isNaN)(c)||
(0,window.isNaN)(d)||(0,window.isNaN)(e)||(c=a.hp({index:b.ma(),data:[c,d,e]}),a.Bc.push(c))}return a.Bc},Ira=function(a){var b=a.index();a=a.data();var c={};c.index={type:"number",value:b};c.x={type:"number",value:a[0]};c.y={type:"number",value:a[1]};c.z={type:"number",value:a[2]};return c},Jra=function(a,b,c){a.Si||(a.Si=new $.Gw);b=b.index();var d=a.$();d.select(b);a.Si.lg(d);return $.qv(a.Si,c)},m6=function(a,b){function c(){var a=this.g("rotationZ"),b=this.g("rotationY"),c=$.zr(this,"xGrid"),
h=$.zr(this,"yGrid"),k=$.zr(this,"zGrid"),l=$.zr(this,"xAxis"),m=$.zr(this,"yAxis"),p=$.zr(this,"zAxis");$.Ar(l,m,p,c,h,k);c&&c.Ao(a).Iq(b);h&&h.Ao(a).Iq(b);k&&k.Ao(a).Iq(b);p&&p.Ao(a).Iq(b);l&&l.Ao(a).Iq(b);m&&m.Ao(a).Iq(b);$.Cr(l,m,p,c,h,k)}$.Cx.call(this);this.Ga("surface");this.Er=["z","value"];this.CY=[];this.mz=[];this.DY=[];this.Ba=[];this.Pz=[];this.data(a||null,b);$.T(this.ua,[["rotationZ",10485776,1,null,c],["rotationY",10485776,1,null,c],["box",16,1],["stroke",16,1]])},Kra=function(a){function b(a){return a.length&&
(0,$.pD)(a,function(a){return null!==a&&""!==a})}var c=[],d=[],e=(0,$.Rw)(a[0],function(a){return(0,window.isNaN)(+a)});(0,$.Re)(a,function(a){c.push(a.slice(0,3));d.push(a.slice(3,6))});c=(0,$.Ze)(c,b);d=(0,$.Ze)(d,b);a=!d.length&&e&&(0,$.Rw)(c[0],function(a){return-1!=a.indexOf("marker")});e&&(c.splice(0,1),d.splice(0,1));return a?{m6:[],dW:c}:{m6:c,dW:d}},l6=function(a,b){var c=a.Ra().transform(b[0])-.5,d=a.bb().transform(b[1])-.5,e=1-a.Zu().transform(b[2])-.5;return[c,d,e]},n6=function(a,b){for(var c=
0,d=0;d<b.length;d++)c+=yra(a.l0,b[d]);c/=b.length;return 2-c},Lra=function(a){for(var b=0,c=0,d=0,e=0,f=-window.Infinity,h=0,k=window.Infinity,l=0,m=0;m<a.length;m++){a[m][1]<b&&(b=a[m][1],c=m);a[m][1]>d&&(d=a[m][1],e=m);var p=a[m][0];f<p&&(f=a[m][0],h=m);k>p&&(k=a[m][0],l=m)}return{left:a[c],right:a[e],bta:a[h],f4:a[l]}},o6=function(a,b,c,d){var e=$.oa(b.scale());$.Aa(a,e)||(d[c].scale=b.scale().F())},p6=function(a,b,c){c in b&&(a[c](b[c]),"scale"in b[c]&&a[c]().scale(b[c].scale))},Mra=function(a,
b){var c=new m6(a,b);c.kd(c.vf("colorScale"));return c};$.H(Y5,$.kz);$.g=Y5.prototype;$.g.Rz=function(){Y5.u.Rz.call(this);for(var a;a=this.P.AY.pop();)a.clear(),this.P.IT.push(a)};$.g.kK=function(){Y5.u.kK.call(this);$5(this).stroke(this.g("stroke"))};$.g.LK=function(){Y5.u.LK.call(this);var a=this.O();$5(this).parent(a)};$.g.pC=function(){var a=this.zIndex()-1,b=0>=this.i?a+2:a;this.Th().zIndex(b);$5(this).zIndex(a);$.Gc(this.D,function(a){a.zIndex(b)})};$.g.remove=function(){Y5.u.remove.call(this);$5(this).parent(null)};
$.g.Kj=function(){$5(this).clear();Y5.u.Kj.call(this)};
$.g.BG=function(a){a-=.5;if(this.ba){a=-a;var b=[[-.5,-.5,a],[-.5,.5,a],[.5,.5,a],[.5,-.5,a]];a=T5(this.K,this.i);for(var c=[],d=-window.Infinity,e=0,f=0;f<b.length;f++){c[f]=U5(a,b[f]);var h=V5(this.i,[c[f]]);h>d&&(d=h,e=f)}c=b[e];c=[[-c[0],c[1],c[2]],[c[0],c[1],c[2]],[c[0],-c[1],c[2]]];for(f=0;f<c.length;f++)c[f]=U5(a,c[f]);a=this.ja();a=X5(c,a);this.G.moveTo(a[0][1],a[0][2]);this.G.lineTo(a[1][1],a[1][2]);this.G.lineTo(a[2][1],a[2][2])}else a=[[a,-.5,.5],[a,.5,.5]],Ara(this,a)};
$.g.CG=function(a){a-=.5;Ara(this,[[-.5,a,.5],[.5,a,.5]])};
$.g.yG=function(a,b,c){if(zra(this)){var d=Z5(this),e=-(a-.5);a=-(b-.5);var f=[[-.5,-.5,e],[-.5,.5,e],[.5,.5,e],[.5,-.5,e]];e=T5(this.K,this.i);b=[];for(var h=-window.Infinity,k=0,l=0;l<f.length;l++){b[l]=U5(e,f[l]);var m=V5(this.i,[b[l]]);m>h&&(h=m,k=l)}l=f[k];b=[[-l[0],l[1],l[2]],[l[0],l[1],l[2]],[l[0],-l[1],l[2]]];a=[[-l[0],l[1],a],[l[0],l[1],a],[l[0],-l[1],a]];for(l=0;l<b.length;l++)b[l]=U5(e,b[l]),a[l]=U5(e,a[l]);e=this.ja();b=X5(b,e);a=X5(a,e);d.moveTo(b[0][1],b[0][2]);d.lineTo(b[1][1],b[1][2]);
d.lineTo(b[2][1],b[2][2]);d.lineTo(a[2][1],a[2][2]);d.lineTo(a[1][1],a[1][2]);d.lineTo(a[0][1],a[0][2]);d.close();d.fill(c.fill());d.zIndex(20)}else{d=T5(this.K,this.i);a-=.5;b-=.5;a=[[a,-.5,.5],[a,.5,.5]];a.push([b,.5,.5]);a.push([b,-.5,.5]);f=[];for(h=0;h<a.length;h++)f.push(U5(d,a[h]));e=this.ja();l=X5(f,e);c.moveTo(l[0][1],l[0][2]);c.lineTo(l[1][1],l[1][2]);c.lineTo(l[2][1],l[2][2]);c.lineTo(l[3][1],l[3][2]);c.close();l=Z5(this);k=[];f[0][0]>f[1][0]?k.push(a[0]):k.push(a[1]);k.push([k[0][0],k[0][1],
-.5]);k.push([b,k[0][1],-.5]);k.push([b,k[0][1],.5]);b=[];for(h=0;h<a.length;h++)b.push(U5(d,k[h]));d=X5(b,e);l.moveTo(d[0][1],d[0][2]);l.lineTo(d[1][1],d[1][2]);l.lineTo(d[2][1],d[2][2]);l.lineTo(d[3][1],d[3][2]);l.close();l.fill(c.fill());l.zIndex(20)}};
$.g.zG=function(a,b,c){var d=T5(this.K,this.i);a-=.5;b-=.5;a=[[-.5,a,.5],[.5,a,.5]];a.push([.5,b,.5]);a.push([-.5,b,.5]);for(var e=[],f=0;f<a.length;f++)e.push(U5(d,a[f]));var h=this.ja(),k=X5(e,h);c.moveTo(k[0][1],k[0][2]);c.lineTo(k[1][1],k[1][2]);c.lineTo(k[2][1],k[2][2]);c.lineTo(k[3][1],k[3][2]);c.close();k=Z5(this);k.clear();var l=[];e[0][0]>e[1][0]?l.push(a[0]):l.push(a[1]);l.push([l[0][0],l[0][1],-.5]);l.push([l[0][0],b,-.5]);l.push([l[0][0],b,.5]);b=[];for(f=0;f<a.length;f++)b.push(U5(d,
l[f]));d=X5(b,h);k.moveTo(d[0][1],d[0][2]);k.lineTo(d[1][1],d[1][2]);k.lineTo(d[2][1],d[2][2]);k.lineTo(d[3][1],d[3][2]);k.close();k.fill(c.fill());k.zIndex(20)};$.g.Ao=function(a){return $.n(a)?(this.K=+a,this.B(28,1),this):this.K};$.g.Iq=function(a){$.n(a)&&(this.i=+a,this.B(28,1))};$.g.R=function(){$.pd(this.G);this.G=null;Y5.u.R.call(this)};$.H(a6,$.Qy);$.g=a6.prototype;$.g.ra=$.Qy.prototype.ra;$.g.sa=$.Qy.prototype.sa|16;$.g.bT=function(a,b,c,d){b=this.g("length");c=this.D.slice();var e=this.D[1],f=this.P[1],h=Math.abs(e-f);c[1]=Math.min(e,f)+h-h*a;a=this.g("stroke");e=$.ip(a);d=c[0]-d/2;d=$.R(d,1)+.5;c=c[1];c=$.R(c,e);this.path.moveTo(d,c);this.path.lineTo(d-b,c);this.path.stroke(a)};$.g.YS=function(a,b,c,d){Bra(this,a,d)};$.g.dT=function(a,b,c,d){Bra(this,a,d)};$.H(b6,$.Sy);$.g=b6.prototype;$.g.KG=function(){c6(this);for(var a=window.Infinity,b=0,c=0;c<this.b.length;c++){var d=V5(this.i,[U5(this.f,this.b[c])]);d<a&&(a=d,b=c)}return this.b[b]};$.g.YQ=function(){b6.u.YQ.call(this);var a=this.zIndex()+2-V5(this.i,[this.D,this.P]);this.line.zIndex(a);this.Xa().zIndex(a);this.yb().zIndex(a)};$.g.nl=function(){return new a6};$.g.Iq=function(a){$.n(a)&&(a=Number(a),this.i!=a&&(this.i=a,this.B(16|this.se,9),this.$d()))};
$.g.Ao=function(a){return $.n(a)?(a=Number(a),this.K!=a&&(this.K=a,this.B(16|this.se,9),this.$d()),this):this.K};$.g.Ut=function(){return!1};$.H(e6,b6);$.g=e6.prototype;$.g.XL=function(){var a=$.zr(this,"title");if(a){var b=this.Az().rb().clone(),c=this.ja();$.ew(a,"bottom");b.height=c.Ua()-b.top;a.ja(b);a.W()}};$.g.jo=function(){c6(this);var a=this.Ut()?this.b[0].slice():this.KG(),b=[-.5==a[0]?.5:-.5,a[1],a[2]];if(-.5==b[0]){var c=b;b=a;a=c}d6(this,a,b,this.ja());this.line.stroke(this.g("stroke"))};$.g.AM=function(a,b,c,d,e,f,h){c=h?this.labels():this.qb();e=this.zIndex()+(0>this.i?2:-2);c.zIndex(e);return Dra(this,a,d+b.height/2)};
$.g.xE=function(a,b,c){if(c=e6.u.xE.call(this,a,b,c)){var d=this.Ao();c=0!==Math.floor(2*d/360)%2;d=$.ab(d);d=c^this.scale().Oe()?d-180:d;var e;45>d&&(e=c?b.length-1:0);135<d&&(e=c?0:b.length-1);return a!==e}return c};$.g.BM=function(a,b,c,d){return Dra(this,b,d)};$.g.Ut=function(){return!1};$.H(f6,b6);$.g=f6.prototype;$.g.KG=function(){c6(this);for(var a=window.Infinity,b=0,c=0;c<this.b.length;c++){var d=V5(this.i,[U5(this.f,this.b[c])]);d<a&&(a=d,b=c)}return this.b[b]};$.g.XL=function(){var a=$.zr(this,"title");if(a){var b=this.Az().rb().clone(),c=this.ja();$.ew(a,"bottom");b.height=c.Ua()-b.top;a.ja(b);a.W()}};$.g.jo=function(){c6(this);var a=this.Ut()?this.b[0]:this.KG(),b=[a[0],-.5==a[1]?.5:-.5,a[2]];if(-.5==b[1]){var c=b;b=a;a=c}d6(this,a,b,this.ja());this.line.stroke(this.g("stroke"))};
$.g.xE=function(a,b,c){if(c=f6.u.xE.call(this,a,b,c)){var d=this.Ao();c=0!==Math.floor(2*d/360)%2;d=$.ab(d);d=c^this.scale().Oe()?d-180:d;if(45<=d&&90>=d||90<d&&135>d)var e=c?0:b.length-1;return a!==e}return c};$.g.AM=function(a,b,c,d,e,f,h){c=h?this.labels():this.qb();e=this.zIndex()+(0>this.i?2:-2);c.zIndex(e);return Era(this,a,d+b.height/2)};$.g.BM=function(a,b,c,d){return Era(this,b,d)};$.H(g6,b6);g6.prototype.XL=function(){var a=$.zr(this,"title");if(a){var b=this.Az().rb().clone();$.ew(a,"left");a.ja(b);a.W()}};g6.prototype.jo=function(){c6(this);var a=this.Ut()?this.b[0]:Cra(this);d6(this,a,[a[0],a[1],-.5],this.ja());this.line.stroke(this.g("stroke"))};g6.prototype.AM=function(a,b,c,d,e,f,h){c=h?this.labels():this.qb();e=this.zIndex()+2;c.zIndex(e);return Fra(this,a,-d-b.width/2)};g6.prototype.BM=function(a,b,c,d){return Fra(this,b,-d)};$.H(h6,$.Y);$.g=h6.prototype;$.g.W=function(){if(this.ib.g("enabled")){this.Na.parent(this.O());this.f.W();var a=$.Cp(this.ib.rc(this,"type")),b=this.ib.rc(this,"size");this.Sc.clear();a(this.Sc,this.b[1],this.b[2],b,b);this.Sc.fill(this.ib.rc(this,"fill"));this.Sc.stroke(this.ib.rc(this,"stroke"))}else this.Na.parent(null)};$.g.rq=function(a){var b=this.ib;"mousemove"===a.type||"mouseover"===a.type?$.Pw(b.Ta(),a.clientX,a.clientY,Jra(b,this,Ira(this))):"mouseout"===a.type&&b.Ta().Kc()};
$.g.data=function(a){return a?(this.la=a,this):this.la};$.g.index=function(a){return $.n(a)?(this.Ad=a,this):this.Ad};$.g.R=function(){$.ud(this.Na,this.Sc,this.f);this.Sc=this.Na=this.f=null;h6.u.R.call(this)};$.H(i6,$.Y);i6.prototype.Yx=function(){this.Sc.moveTo(this.b.from[1],this.b.from[2]);this.Sc.lineTo(this.b.Ke[1],this.b.Ke[2])};i6.prototype.W=function(){this.ib.g("enabled")?(this.Sc.clear(),this.Sc.parent(this.O()),this.Yx(),this.Sc.stroke(this.ib.Ep(this))):this.Sc.parent(null)};i6.prototype.R=function(){$.pd(this.Sc);this.Sc=null;i6.u.R.call(this)};$.H(j6,$.V);j6.prototype.ra=40960;var q6={};$.vq(q6,[[0,"enabled",$.Gq],[1,"stroke",$.Sq]]);$.U(j6,q6);j6.prototype.Ep=function(){return this.g("stroke")};j6.prototype.F=function(){var a={};$.Wq(this,q6,a);return a};j6.prototype.U=function(a,b){$.Oq(this,q6,a,b)};$.H(k6,$.Y);k6.prototype.ra=17;var r6={};$.vq(r6,[[0,"enabled",$.Gq],[0,"type",$.fr],[0,"size",function(a){return $.E(a)?a:Number(a)}],[1,"fill",$.Qq],[1,"stroke",$.Pq]]);$.U(k6,r6);$.g=k6.prototype;$.g.Nga=function(){this.wa(1)};$.g.ZL=function(a){this.b||(this.b=new j6,$.W(this,"droplines",this.b),$.L(this.b,this.Nga,this));return $.n(a)?(this.b.N(a),this):this.b};$.g.hp=function(a){var b=new h6(this,new i6(this.ZL()));b.data(a.data);b.index(a.index);return b};
$.g.W=function(a){this.J(2)&&(this.Na.parent(this.O()),this.I(2));this.Na.Fi();for(var b,c=Hra(this),d=0;d<c.length;d++)b=c[d],Gra(this,b,a);c.sort(function(a,b){return b.zIndex()-a.zIndex()});for(d=0;d<c.length;d++)b=c[d],b.O(this.Na),b.W()};$.g.$=function(){return this.la.$()};$.g.dd=function(){$.ud(this.Bc);this.Bc.length=0;this.wa(16)};
$.g.data=function(a,b){return $.n(a)?(this.Wf!==a&&(this.Wf=a,this.la&&$.nr(this.la,this.dd,this),$.ud(this.la,this.Yc),$.J(a,$.Fr)?this.la=a.Ui():this.la=$.J(a,$.Pr)?a.Yd(this.Zc):(this.Yc=new $.Pr($.A(a)||$.z(a)?a:null,b)).Yd(this.Zc),$.L(this.la,this.dd,this),this.dd()),this):this.la};$.g.rc=function(a,b){var c=this.$();c.select(a.index());c=c.get(b)||this.g(b);if($.E(c)){var d=Ira(a);d.sourceColor={type:"",value:this.pa.Ep(a.data()[2])};d=Jra(this,a,d);return c.call(d,d)}return c};
$.g.Ta=function(a){this.gb||(this.gb=new $.xw(0),this.gb.ef(),$.W(this,"tooltip",this.gb),this.gb.parent(this.pa.Ta()),this.gb.ya(this.pa));return $.n(a)?(this.gb.N(a),this):this.gb};$.g.F=function(){var a={};$.Wq(this,r6,a);var b=this.data();b&&(a.data=b.F());this.b&&(a.droplines=this.b.F());return a};$.g.U=function(a,b){$.Oq(this,r6,a,b);var c=a.data;c&&this.data(c);(c=a.droplines)&&this.ZL(c)};$.g.R=function(){$.ud(this.Bc,this.b,this.Na);this.Bc.length=0;this.pa=null};var s6=k6.prototype;
s6.droplines=s6.ZL;s6.tooltip=s6.Ta;$.H(m6,$.Cx);var t6=function(){var a={};$.vq(a,[[0,"rotationZ",$.Eq],[0,"rotationY",function(a){a=Number(a);return $.Za(a,-90,90)}],[1,"box",$.Sq],[1,"stroke",$.Sq]]);return a}();$.U(m6,t6);$.g=m6.prototype;$.g.ra=$.Cx.prototype.ra;$.g.sa=$.Cx.prototype.sa|10580496;$.g.TY=function(a){this.Yu||(this.Yu=new g6,$.L(this.Yu,this.vo,this),this.Yu.Ao(this.g("rotationZ")),this.Yu.Iq(this.g("rotationY")),$.W(this,"zAxis",this.Yu));return $.n(a)?(this.Yu.N(a),this):this.Yu};
$.g.Zh=function(a){this.mc||(this.mc=new e6,$.L(this.mc,this.vo,this),this.mc.Ao(this.g("rotationZ")),this.mc.Iq(this.g("rotationY")),$.W(this,"xAxis",this.mc));return $.n(a)?(this.mc.N(a),this):this.mc};$.g.ij=function(a){this.gl||(this.gl=new f6,$.L(this.gl,this.vo,this),this.gl.Ao(this.g("rotationZ")),this.gl.Iq(this.g("rotationY")),$.W(this,"yAxis",this.gl));return $.n(a)?(this.gl.N(a),this):this.gl};$.g.vo=function(){this.B(2097152,1)};$.g.bg=function(){return this.la.$()};
$.g.Dc=function(){return this.sd=this.la.$()};$.g.$=function(){return this.sd||(this.sd=this.la.$())};$.g.yj=function(){return!this.la.$().Gb()};
$.g.data=function(a,b){if($.n(a)){if(this.Wf!==a){this.Wf=a;this.la&&$.nr(this.la,this.dd,this);$.pd(this.la);$.pd(this.Yc);if($.J(a,$.Fr))this.la=a.Ui();else if($.J(a,$.Pr))this.la=a.Yd();else{var c=null;$.z(a)?c=Kra($.Vr(a,b)):$.A(a)&&(c=Kra(a));c&&c.dW.length&&(this.Db().enabled(!0),this.Db().data(c.dW));this.la=(this.Yc=new $.Pr(c?c.m6:c)).Yd()}$.L(this.la,this.dd,this);this.B(4608,1)}return this}return this.la};$.g.dd=function(){this.B(4352,1)};$.g.sT=function(a,b,c){return(0,$.za)(c,a)===b};
$.g.ob=function(){if(this.J(4096)){this.B(16384);var a=this.data().$();a.reset();for(var b=[],c=[],d=[];a.advance();){var e=$.N(a.get("x")),f=$.N(a.get("y")),h=$.N(a.get("z"));b.push(e);c.push(f);d.push(h)}b=(0,$.Ze)(b,this.sT);c=(0,$.Ze)(c,this.sT);d=(0,$.Ze)(d,this.sT);this.CY=b;this.mz=c;this.DY=d;a=a.Gb();3E3<a&&$.kl(800,null,[a],!0);(b.length*c.length!=a||4>a)&&0!=a?($.il(400),this.N4=!0):this.N4=!1;this.I(4096)}c=this.Ra();a=this.bb();d=this.Zu();b=!1;c.Nf()&&c.Ag();a.Nf()&&a.Ag();d.Nf()&&d.Ag();
e=[];f=[];h=[];var k=$.zr(this,"markers");if(k){k=Hra(k);for(var l=0;l<k.length;l++){var m=k[l].data();e.push(m[0]);f.push(m[1]);h.push(m[2])}}c.Xc.apply(c,$.Ga(this.CY,e));a.Xc.apply(a,$.Ga(this.mz,f));d.Xc.apply(d,$.Ga(this.DY,h));c.Nf()&&(b|=c.Hg());a.Nf()&&(b|=a.Hg());d.Nf()&&(b|=d.Hg());this.J(16384)&&this.vb&&(c=$.Ga(this.DY,h),this.vb.Nf()?(this.vb.Ag(),this.vb.Xc.apply(this.vb,c),this.vb.Hg()):(this.vb.zo(),this.vb.Xc.apply(this.vb,c)),$.J(this.vb,$.iz)&&$.Qt(this.vb.Xa()),this.B(16),this.I(16384));
b&&this.B(65536)};$.g.Ll=function(){this.ob();for(var a=this.Zu().Xa().get(),b=[],c=0;c<a.length;c++){var d=this.Ep(a[c]);d={index:0,text:a[c],iconEnabled:!0,iconType:"square",iconStroke:$.Xl(d,1),iconFill:d,disabled:!this.enabled()};b.push(d)}return b};$.g.Ue=function(){return[]};$.g.Ra=function(a){if($.n(a)){if(a=$.lt(this.eb,a,null,15))this.eb=a,this.eb.da(!1),this.B(16,1);$.L(this.eb,this.bE,this);return this}this.eb||(this.eb=$.ht(),$.L(this.eb,this.bE,this));return this.eb};
$.g.bb=function(a){if($.n(a)){if(a=$.lt(this.Fc,a,null,15))this.Fc=a,this.Fc.da(!1),this.B(16,1);$.L(this.Fc,this.bE,this);return this}this.Fc||(this.Fc=$.ht(),$.L(this.Fc,this.bE,this));return this.Fc};$.g.Zu=function(a){if($.n(a)){if(a=$.lt(this.rz,a,null,15))this.rz=a,this.rz.da(!1),this.B(16,1);$.L(this.rz,this.bE,this);return this}this.rz||(this.rz=$.ht(),$.L(this.rz,this.bE,this));return this.rz};
$.g.kd=function(a){if($.n(a)){if(null===a&&this.vb)this.vb=null,this.B(16400,1);else if(a=$.lt(this.vb,a,null,48,null,this.Vp,this)){var b=this.vb==a;this.vb=a;this.vb.da(b);b||this.B(16400,1)}return this}return this.vb};$.g.Vp=function(a){$.X(a,6)&&this.B(16896,1)};$.g.bE=function(){this.B(16,1)};$.g.Ep=function(a){var b=this.kd(),c;b?c=b.Pq(a):c=this.cc().nc(0);return c};
$.g.Qi=function(a){this.Mb||(this.Mb=new $.ZN,$.W(this,"colorRange",this.Mb),this.Mb.fa(!0,this.Mb.oa),this.Mb.zr().Ga("defaultMarkerFactory","surface.colorRange.marker"),this.Mb.zr().fa(!0,this.Mb.zr().oa),this.Mb.kb(this),this.Mb.O(this.Oa),$.L(this.Mb,this.Sz,this),this.B(8196,1));return $.n(a)?(this.Mb.N(a),this):this.Mb};$.g.Sz=function(a){var b=0,c=0;$.X(a,1)&&(b|=8208,c|=1);$.X(a,8)&&(b|=4,c|=8);this.B(b,c)};
$.g.Dq=function(a){a.button==$.Qi&&(this.Z3=!0,this.Cka=a.clientX,this.Dka=a.clientY,this.Fka=this.g("rotationY"),this.Gka=this.g("rotationZ"))};$.g.Fh=function(a){"mouseup"==a.type&&(this.Z3=!1)};$.g.Hf=function(a){if(this.Z3){this.ka();var b=this.pb();this.rotationY(this.Fka-(this.Dka-a.clientY)/b.height*110);this.rotationZ(this.Gka+(this.Cka-a.clientX)/b.width*110);this.da(!0)}};
$.g.Qh=function(a){if(!this.pf()){var b=this.g("rotationZ"),c=this.g("rotationY"),d=[-1,0,0];this.l0=d=U5(T5(0,c),d);b*=Math.PI/180;c*=Math.PI/180;d=Math.sin(b);b=Math.cos(b);var e=Math.sin(c);c=Math.cos(c);this.Xg=[b*c,-d*c,e,d,b,0,-e*b,d*e,c];c=$.zr(this,"xGrid");d=$.zr(this,"yGrid");b=$.zr(this,"zGrid");e=$.zr(this,"xAxis");var f=$.zr(this,"yAxis"),h=$.zr(this,"zAxis");this.Na||(this.Na=this.Oa.Bd(),this.Na.zIndex(36),this.TE=this.Na.Bd(),this.TE.zIndex(36));var k=$.zr(this,"colorRange");this.ob();
this.J(65536)&&(h&&!h.scale()&&h.scale(this.Zu()),e&&!e.scale()&&e.scale(this.Ra()),f&&!f.scale()&&f.scale(this.bb()),c&&c.scale(this.Ra()),d&&d.scale(this.bb()),b&&b.scale(this.Zu()),this.I(65536));this.J(8192)&&k&&(k.ka(),k.scale(this.kd()),k.target(this),k.da(!1),this.B(4));this.J(4)&&(k?(k.ja(a.clone()),this.lf=k.yd()):this.lf=a.clone(),this.lf.left+=10,this.lf.width-=10,h&&h.ja(this.lf),f&&f.ja(this.lf),e&&e.ja(this.lf),c&&c.ja(this.lf),d&&d.ja(this.lf),b&&b.ja(this.lf),this.B(512),this.I(4));
this.J(8192)&&(k&&(k.ka(),k.O(this.Oa),k.W(),k.da(!1)),this.I(8192));a=this.lf;var l=[[-.5,-.5,.5],[-.5,.5,.5],[.5,.5,.5],[.5,-.5,.5]];h=[[-.5,-.5,-.5],[-.5,.5,-.5],[.5,.5,-.5],[.5,-.5,-.5]];if(0==this.Pz.length)for(f=0;12>f;f++)this.Pz[f]=this.Na.path();else for(f=0;f<this.Pz.length;f++)this.Pz[f].clear();e=this.g("box");var m=[],p=[];for(f=0;f<l.length;f++)m[f]=U5(this.Xg,l[f]),p[f]=U5(this.Xg,h[f]);f=Lra(m);h=f.f4;k=Lra(p).f4;var q=f.left,r=[];for(f=0;f<m.length;f++){var t=f==m.length-1?0:f+1,
u=m[t],v=m[f],w=Math.abs(l[f][0]-l[t][0]),x=Math.abs(l[f][1]-l[t][1]),y=$.zr(this,"xAxis"),B=$.zr(this,"yAxis");t=$.zr(this,"zAxis");y&&y.enabled()&&y.Ut()&&f==m.length-1||B&&B.enabled()&&B.Ut()&&0==f||y&&y.enabled()&&w>x&&0<=[v,u].indexOf(h)||B&&B.enabled()&&x>w&&0<=[v,u].indexOf(h)||r.push([m[f],u])}for(f=0;f<p.length;f++)u=f==p.length-1?p[0]:p[f+1],r.push([p[f],u]);for(f=0;f<m.length;f++)t&&t.enabled()&&(t.Ut()&&0==f||m[f]==q)||r.push([m[f],p[f]]);for(f=0;f<r.length;f++){t=r[f][0];l=r[f][1];m=
Math.min(n6(this,[t]),n6(this,[l]));if(t==h||l==h||t==k||l==k)m=100;this.jo(this.Pz[f],X5(r[f],a),m,e)}this.J(8388608)&&(c&&(c.O(this.Oa),c.W()),d&&(d.O(this.Oa),d.W()),b&&(b.O(this.Oa),b.W()),this.I(8388608));if(this.J(16)){t=this.lf;c=this.data().$();c.reset();d=this.g("stroke");this.TE.Fi();if(!this.N4){this.Na.suspend();for(b=0;b<this.CY.length-1;b++)for(a=0;a<this.mz.length-1;a++){f=b*(this.mz.length-1)+a;(e=this.Ba[f])?(e.parent(this.TE),e.clear()):(e=this.Ba[f]=this.TE.path(),e.stroke(null));
c.select(b*this.mz.length+a);f=[$.N(c.get("x")),$.N(c.get("y")),$.N(c.get("z"))];c.select((b+1)*this.mz.length+a);h=[$.N(c.get("x")),$.N(c.get("y")),$.N(c.get("z"))];c.select((b+1)*this.mz.length+a+1);k=[$.N(c.get("x")),$.N(c.get("y")),$.N(c.get("z"))];c.select(b*this.mz.length+a+1);r=[$.N(c.get("x")),$.N(c.get("y")),$.N(c.get("z"))];l=[f,h,k,r];p=this.Zu();m=p.uh();p=p.ei();u=this.bb();q=u.uh();u=u.ei();w=this.Ra();v=w.uh();w=w.ei();x=0;y=[];for(B=0;B<l.length;B++){var G=l[B];if(!(G[2]>=m&&G[2]<=
p&&G[1]<=u&&G[1]>=q&&G[0]>=v&&G[0]<=w)){x++;if(G[2]<m||G[2]>p)G[2]=Math.max(Math.min(G[2],p),m);if(G[1]<u||G[1]>q)G[1]=Math.max(Math.min(G[1],u),q);if(G[0]>v||G[0]<w)G[0]=Math.max(Math.min(G[0],w),v)}y.push(G)}if(l=x==l.length?null:y)m=U5(this.Xg,l6(this,l[0])),p=U5(this.Xg,l6(this,l[1])),q=U5(this.Xg,l6(this,l[2])),u=U5(this.Xg,l6(this,l[3])),l=36+n6(this,[m,p,q,u]),m=X5([m,p,q,u],t),f=this.Ep((f[2]+h[2]+k[2]+r[2])/4),this.jo(e,m,l,d),e.close(),e.fill(f||"white")}this.Na.resume()}if(t=$.zr(this,
"markers"))t.O(this.Na),t.W(this.lf);this.I(16)}this.J(2097152)&&(this.QL(),this.I(2097152))}};$.g.QL=function(){var a=$.zr(this,"xAxis"),b=$.zr(this,"yAxis"),c=$.zr(this,"zAxis");a&&a.O(this.Oa).W();b&&b.O(this.Oa).W();c&&c.O(this.Oa).W()};$.g.jo=function(a,b,c,d){a.clear();a.moveTo(b[0][1],b[0][2]);for(var e=1;e<b.length;e++)a.lineTo(b[e][1],b[e][2]);a.zIndex(c);a.stroke(d)};
$.g.im=function(a){this.qt||(this.qt=new Y5,this.qt.Xj=this,$.L(this.qt,this.Oy,this),this.qt.Ao(this.g("rotationZ")),this.qt.Iq(this.g("rotationY")),$.W(this,"xGrid",this.qt),this.B(8388608,1));return $.n(a)?(this.qt.N(a),this):this.qt};$.g.km=function(a){this.Or||(this.Or=new Y5,this.Or.Xj=this,$.L(this.Or,this.Oy,this),this.Or.Ao(this.g("rotationZ")),this.Or.Iq(this.g("rotationY")),$.mz(this.Or,"vertical"),$.W(this,"yGrid",this.Or),this.B(8388608,1));return $.n(a)?(this.Or.N(a),this):this.Or};
$.g.TJ=function(a){this.Uq||(this.Uq=new Y5,this.Uq.Xj=this,$.L(this.Uq,this.Oy,this),this.Uq.Ao(this.g("rotationZ")),this.Uq.Iq(this.g("rotationY")),$.mz(this.Uq,"horizontal"),zra(this.Uq,!0),$.W(this,"zGrid",this.Uq),this.B(8388608,1));return $.n(a)?(this.Uq.N(a),this):this.Uq};$.g.Oy=function(){this.B(8388624,1)};$.g.Ln=function(a){var b=8388624;$.X(a,16)&&(b|=65536);this.im().B(this.im().sa);this.km().B(this.km().sa);this.TJ().B(this.TJ().sa);this.B(b,1)};
$.g.Db=function(a){this.Bc||(this.Bc=new k6(this),$.W(this,"markers",this.Bc),$.L(this.Bc,this.Ln,this));return $.n(a)?(this.Bc.N(a),this):this.Bc};$.g.wc=function(){return this};$.g.be=function(){return null};$.g.cc=function(a){if($.J(a,$.Os))return this.Hc($.Os,a),this;if($.J(a,$.Ls))return this.Hc($.Ls,a),this;$.C(a)&&"range"==a.type?this.Hc($.Os):($.C(a)||null==this.Fa)&&this.Hc($.Ls);return $.n(a)?(this.Fa.N(a),this):this.Fa};
$.g.Hc=function(a,b){if($.J(this.Fa,a))b&&this.Fa.N(b);else{var c=!!this.Fa;$.pd(this.Fa);this.Fa=new a;$.W(this,"palette",this.Fa);this.Fa.Fp();b&&this.Fa.N(b);$.L(this.Fa,this.Of,this);c&&this.B(16,1)}};$.g.Of=function(a){$.X(a,2)&&this.B(16,1)};$.g.Ma=function(){return"surface"};
$.g.F=function(){var a=m6.u.F.call(this);this.la&&(a.data=this.data().F());var b=[];this.eb&&(a.xScale=this.Ra().F(),b.push($.oa(this.Ra())));this.Fc&&(a.yScale=this.bb().F(),b.push($.oa(this.bb())));this.rz&&(a.zScale=this.Zu().F(),b.push($.oa(this.Zu())));this.mc&&(a.xAxis=this.Zh().F(),o6(b,this.Zh(),"xAxis",a));this.gl&&(a.yAxis=this.ij().F(),o6(b,this.ij(),"yAxis",a));this.Yu&&(a.zAxis=this.TY().F(),o6(b,this.TY(),"zAxis",a));this.qt&&(a.xGrid=this.im().F(),o6(b,this.im(),"xGrid",a));this.Or&&
(a.yGrid=this.km().F(),o6(b,this.km(),"yGrid",a));this.Uq&&(a.zGrid=this.TJ().F(),o6(b,this.TJ(),"zGrid",a));a.colorScale=this.vb?this.kd().F():null;this.Mb&&(a.colorRange=this.Qi().F());(b=$.zr(this,"markers"))&&(a.markers=b.F());$.Wq(this,t6,a);return{chart:a}};
$.g.U=function(a,b){m6.u.U.call(this,a,b);"data"in a&&this.data(a.data);p6(this,a,"xScale");p6(this,a,"yScale");p6(this,a,"zScale");p6(this,a,"xAxis");p6(this,a,"yAxis");p6(this,a,"zAxis");p6(this,a,"xGrid");p6(this,a,"yGrid");p6(this,a,"zGrid");"colorScale"in a&&this.kd(a.colorScale);"colorRange"in a&&this.Qi(a.colorRange);"markers"in a&&this.Db(a.markers);$.Oq(this,t6,a,b)};
$.g.R=function(){$.ud(this.Bc,this.mc,this.gl,this.Yu,this.Ba,this.qt,this.Or,this.Uq,this.Pz,this.TE,this.Na,this.Mb,this.Fa,this.la,this.Yc);this.Pz.length=0;this.Ba.length=0;this.Uq=this.Or=this.qt=this.Yu=this.gl=this.mc=this.Yc=this.la=this.Fa=this.Mb=this.Na=this.TE=null;m6.u.R.call(this)};$.g.rs=function(){var a=[];this.data().Gb()&&a.push(this);this.Bc&&this.Bc.data()&&this.Bc.data().Gb()&&a.push(this.Bc);return a};$.g.gD=function(a,b,c){a=[];c.push(a);return a};
$.g.H4=function(a,b,c,d){for(var e=0;e<c.length;e++)a.push(this.VW(c[e],b[d],d+1,c.length))};$.g.VW=function(a,b){return $.J(b,m6)?a:"marker "+a};$.g.fD=function(){return["x","y","z"]};var u6=m6.prototype;u6.colorScale=u6.kd;u6.colorRange=u6.Qi;u6.xGrid=u6.im;u6.yGrid=u6.km;u6.zGrid=u6.TJ;u6.xAxis=u6.Zh;u6.yAxis=u6.ij;u6.zAxis=u6.TY;u6.xScale=u6.Ra;u6.yScale=u6.bb;u6.zScale=u6.Zu;u6.getType=u6.Ma;u6.palette=u6.cc;u6.markers=u6.Db;$.Wp.surface=Mra;$.F("anychart.surface",Mra);}).call(this,$)}
