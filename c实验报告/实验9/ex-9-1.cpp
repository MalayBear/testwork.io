#include<stdio.h>
int main()
{	
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int b[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int c[3][4];
	int i,j;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
			c[3][4] = a[i][j] + b[i][j];
			printf("%4d",c[3][4]);
		}
		printf("\n");
	}
	
	
return 0;
}

