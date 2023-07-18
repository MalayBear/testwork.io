#include<stdio.h>
//用户输入加油量a、汽油品种g和服务类型s（f-自动，m-自己，e-协助），计算并输出应付款M。

int main(){
float a,r1,r2,M;
char g,s;
printf("please enter amount，gasoline，service：");
scanf("%f,%c,%c",&a,&g,&s);
//自动加油站有x、y、z三种汽油，单价分别为8.80、8.35、8.18
switch(g)
{
case 'x':r1=8.80;break;
case 'y':r1=8.85;break;
case 'z':r1=8.18;break;
		                             		                             
}
//自己加"或"协助加"两个服务等级，以便用户得到10%或5%的优惠。
switch(s)
{
case 'f':r2=0;break;  
case 'm': r2=0.1;break;
case 'e':r2=0.05;break;              
}
M=r1-(r1*r2);
printf("The total cost：%.2f\n",M);


return 0;
}

