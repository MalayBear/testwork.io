#include<stdio.h>
int main()
{
	int a[50][50];
	a[1][1] = 1;
	int i ,j ;
	int n;
	printf("input n\n");
	scanf("%d",&n);
	for(i = 1;i < n;i++)
	{
		for(j = 1;j <= i;j++)
		{
			if(i == j || j == 1 )
			{
				a[i][j] = 1;
				printf("%d ",a[i][j]);
			}
			else
			{
				a[i][j] = a[i -1][j - 1] + a[i - 1][j];
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
	
	
return 0;
}

