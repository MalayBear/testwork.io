#include<stdio.h>
#define N 5
int main()
{
	char arr[N];
	char n;
	int i,j;
	printf("enter the arr\n");
	for(i = 0;i < N;i++)
	{
		scanf("%c",&arr[i]);
	}
	printf("enter the n\n");
	scanf(" %c",&n);
	for(i = 0; arr[i] !='\0';i++)
	{
		if(arr[i] == n)
		{	
			for(j = i;j < N;j++)
			{	
				arr[j] = arr[j + 1];
			}
			break;
		}	
	}
	 printf("Array after deletion:\n");
	 for(i = 0;i < N-1;i++)
	 {
	 	printf("%c",arr[i]);
	 }
	
	
	
return 0;
}

