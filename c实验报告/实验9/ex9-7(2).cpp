#include<stdio.h>
#include<string.h>
void delete_char(char str[],char word)
{
	int point = 0;
	for(int i = 0;i < strlen(str);i++)
	{
		if(str[i] == word)
		{
			continue; 
		}
		else
		{
			str[point] = str[i];
			point++;
		}
	}
	 str[point] ='\0';
	
}
int main()
{	
	char str[100];
	char word;
	printf("enter the str\n ");
	scanf("%s",str);
	printf("enter the word\n");
	scanf(" %c",&word);
	delete_char(str,word);
	printf("%s",str);
	
 return 0;
}

