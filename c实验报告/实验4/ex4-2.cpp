#include<stdio.h>
int main()
{
	int year;
	printf("���������");
	scanf("%d",&year);
	if(year%400==0){
		printf("������");
	} 
	else if(year%4==0&&year%100!=0)
	{
		printf("������"); 
	}
	else{
		printf("��������"); 
	}
	 
return 0;
}


