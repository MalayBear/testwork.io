#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int n=10;
	int i;
	int temp;
//	��� 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;	
	}
	printf("����������Ϊ\n");
//	���
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	} 

system("pause")	;
return 0;
}

