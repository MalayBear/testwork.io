#include<stdio.h>
#define N 5
#define M 5
int main(void) {
    int i, j;
    int a[N][M];
    int sum=0;
    printf("Please input:\n");
    for(i = 0;i < N;i++)
    {
    	for(j = 0;j < M;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < M;j++)
		{
			printf("%4d",a[i][j]);
			if(i == j)
			{
				sum +=a[i][i];
			}
		}
		printf("\n");
	}
		printf("正对角线的数的和为%d\n",sum);
    
        
  

return 0;
}

