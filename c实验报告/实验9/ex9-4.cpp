#include<stdio.h>
#define N 3 
int main()
{	
	int i;
	char str[100];
	int upper = 0;
	int lower = 0;
	int other = 0;
	int dight = 0;
	printf("please enter the str\n");
	gets(str);
	for(i = 0;str[i] != '\0';i++)
	{
		if(str[i] >='a' && str[i] <= 'z')
		{
			lower++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			upper++;
		}
		else if(str[i] >= '0' && str[i] < '9')
		{
			dight++;
		}
		else
		{
			other++;
		}
	}
	printf("dight = %d, upper = %d, lower = %d, other = %d \n",dight,upper,lower,other);
	return 0;
}
