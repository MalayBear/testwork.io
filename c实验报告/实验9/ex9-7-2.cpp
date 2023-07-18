#include<stdio.h>
#include<string.h>
void delete_char(char* string,char* word)
{
	char* words[100];
	char* temp = strtok(string," ");
	int count = 0;
	while(temp != NULL)
	{
		words[count++] = temp;
		temp = strtok(NULL," ");
	}
	char* new_string = string;
	for(int i = 0;i < count;i++)
	{
		if(strcmp (words[i] ,word) != 0)
		{
			sprintf(new_string,"%s ",words[i]);
			new_string += strlen(words[i]) + 1;
		}
		
	}
	new_string ='\0';
}


int main()
{	
	char str[100];
	char word[100];
	printf("enter the str\n");
	scanf("%s",str);
	fgets(str ,sizeof(str),stdin);
	str[strlen(str)-1] ='\0';
	printf("enter the word\n");
	scanf("%s",word);
	delete_char(str,word);
	printf("%s",str);
	
	
 return 0;
}

