#include<stdio.h>
int main(){
double a,rate;
printf("enter a\n");
scanf("%lf",&a);
if(a<3000)
{
	rate=0;
}
else if(a>=3000&&a<4000)
{	rate=0.05;	
}
else if(a>=4000&&a<6000)
{	rate=0.08;
}
else if(a>=6000&&a<8000)
{	rate=0.1;
}
else
{
	rate=0.15;
}
printf("˰��Ϊ %.1f% %,Ӧ��˰�%.2f,ʵ�ý�����%.2f",rate*100,a*rate,a-a*rate);
return 0;
}

