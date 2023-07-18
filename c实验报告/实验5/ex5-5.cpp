#include<stdio.h>
int main(){
int num;
printf("please enter the number!\n");
scanf("%d",&num);
if(num%3==0&&num%5==0&&num%7==0)
{
	printf("能同时被3，5，7整除\n");
}
else if(num%3==0&&num%5==0&&num%7!=0)
{
	printf("能被其中的3和5整除\n");
}
else if(num%3==0&&num%7==0&&num%5!=0)
{
	printf("能被其中的3和7整除\n");
}
else if(num%5==0&&num%7==0&&num%3!=0)
{
	printf("能被其中的5和7整除\n");
}
else if(num%3==0&&num%5!=0&&num%7!=0)
{
	printf("只能被3整除\n");
}
else if(num%5==0&&num%3!=0&&num%7!=0)
{
	printf("只能被5整除\n");
}
else if(num%7==0&&num%3!=0&&num%5!=0)
{
	printf("只能被7整除\n");
}
else
{
	printf("不能被3，5，7任意一个整除\n");
}
return 0;
}

