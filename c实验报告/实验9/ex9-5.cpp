#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	int i = 0;
	int j = 0;
	printf("enter the str1\n");
	gets(str1);
	printf("enter the str2\n");
	gets(str2);
	while(str1[i] !='\0')
	{
		i++;
	}
	while(str2[j] !='\0')
	{
		str1[i++] =str2[j++];
	}
	str1[i] = '\0';
	printf("concatenated string =%s\n",str1);
	
return 0;
}

