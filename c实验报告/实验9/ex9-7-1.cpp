#include<stdio.h>
#define N 4
int main()
{
	int i,j;
	int count = 0;
	char arr[N];
	char n;
	printf("please enter the arr\n");
	for(i = 0;i < N;i++)
	{
		scanf("%c",&arr[i]);
	}
	printf("please enter n\n");
	scanf(" %c",&n);
	
	for( i = 0; arr[i] != '\0';i++)
	{
		if(n == arr[i])
		{
			count++;
		}
	}
		 if(count ==0)
		{
			printf("the character %c does not appear in the arr.\n", n);
		}
	
		else
		{
			printf("the number of %c = %d\n", n, count);
		}

return 0;
}

