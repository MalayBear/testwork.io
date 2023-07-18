#include<stdio.h>
int main()
{	
	int t;
	int arr[11]={10,30,60,20,40,50,70,90,80,100,};
	printf("please enter the number\n");
	scanf("%d",&arr[10]);
	for(int i=0;i<10;i++)
	{
		if(arr[10-i]<arr[10-i-1])
		{
			t=arr[10-i-1];
			arr[10-i-1]=arr[10-i];
			arr[10-i]=t;
		}
	
	}
	for(int i=0;i<11;i++){
	
	printf("%d ",arr[i]);
	}
return 0;
}

