#include<stdio.h>
int main()
{
	int a[20][20] = {0};
	int n;
	printf("input an odd number from 1 to 15 as the order\n",n);
	scanf("%d",&n);
	int i,j,k;
	j = n/2 + 1;
	a[1][j] = 1;
	for(k = 2;k <=n*n;k++)
	{	
		i = i-1;
		j = j+1;
		if((i <= 0)&&(j <= n))
		{
			i = n;
		}
		if((i <= 0)&&(j > n))
		{
			i = i + 2;
			j = j - 1;
		}
		if(j > n)
		{
			j = 1;
		}
		if( a[i][j] == 0)
		{
			a[i][j] = k;
		}
		else
		{
			i = i + 2;
			j = j - 1;
			a[i][j] = k;
		}	
	}
	for(i = 1;i <=n;i++)
	{
		for(j = 1;j <= n;j++)
		{
			printf("%5d",a[i][j]);
		 } 
		 printf("\n");
	}
	
return 0;
}

