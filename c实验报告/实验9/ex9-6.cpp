#include<stdio.h>
int main()
{	int i,j;
	char arr[4][20];
	int count = 0;
	printf("please enter the arr\n");
	for(i = 0;i < 4;i++)
	{
		scanf("%s",&arr[i]);
	}
	for(i = 0;i < 4;i++)
	{
		for(j = 0;arr[i][j] !='\0';j++)
		{
			if(arr[i][j] != ' ')
			{
				count++;
			}
			
		}
	}
	printf("There are %d word in the line\n",count-1);
	
return 0;
}

