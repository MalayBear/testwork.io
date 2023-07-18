#include<stdio.h>
int main(){
	int n,i,j,mul;
	int sum=0;
	printf("enter the n(n<=10)\n");
	scanf("%d",&n);
	if(n>10)
	{
		printf("error!");
	}
	for(i=1;i<=n;i++)
	{	mul=1;
		for(j=1;j<=i;j++)
		{
			mul=mul*j;
		}
		sum=sum+mul;
	}
	printf("n=%d,sum=%d\n\n",n,sum);
return 0;
}

