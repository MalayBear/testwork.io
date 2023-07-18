#include<stdio.h>
#include<string.h>
void delete_char(char*string,char c)
{
	char*new_string = string;
	while(*string)
	{
		if(*string != c)
		{
		  *new_string++ = *string;
		}	
	*string++;	
	}
	*new_string = '\0';
}
int main()
{	
	char str[100];
	char word;
	printf("input the str\n");
	scanf("%s",str);
	printf("enter the word\n");
	scanf(" %c",&word);
	delete_char(str,word);
	printf("the last of str is %s\n",str);
	
	
	
return 0;
}

