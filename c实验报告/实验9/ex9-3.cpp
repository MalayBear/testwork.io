#include <stdio.h>
int main()
{	//int arr[4][5] = {13,12,1,2,3,4,5,6,10,9,8,100,7,14,15,16,17,18,19,11};
	int arr[4][5];
	int s[4];
	int i,j;
	printf("please enter the arr\n");
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 5;j++)
		{	
			scanf("%d,",&arr[i][j]);
		}
		printf("\n");
	
	}
	for(i = 0;i < 4;i++)
	{	int max = arr[i][0]; 
		for(j = 0;j < 5;j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
				
			}
		}
		
		s[i] = max;
	}
	for(i = 0;i < 4;i++)
	{
		printf("%4d",s[i]);
	}
	
	
	
	return 0;
}
