#include<stdio.h>
int main(){
int num;
printf("please enter the number!\n");
scanf("%d",&num);
if(num%3==0&&num%5==0&&num%7==0)
{
	printf("��ͬʱ��3��5��7����\n");
}
else if(num%3==0&&num%5==0&&num%7!=0)
{
	printf("�ܱ����е�3��5����\n");
}
else if(num%3==0&&num%7==0&&num%5!=0)
{
	printf("�ܱ����е�3��7����\n");
}
else if(num%5==0&&num%7==0&&num%3!=0)
{
	printf("�ܱ����е�5��7����\n");
}
else if(num%3==0&&num%5!=0&&num%7!=0)
{
	printf("ֻ�ܱ�3����\n");
}
else if(num%5==0&&num%3!=0&&num%7!=0)
{
	printf("ֻ�ܱ�5����\n");
}
else if(num%7==0&&num%3!=0&&num%5!=0)
{
	printf("ֻ�ܱ�7����\n");
}
else
{
	printf("���ܱ�3��5��7����һ������\n");
}
return 0;
}

