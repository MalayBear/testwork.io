#include<stdio.h>
#include<string.h>

int main()
{
	char psd[7]="123456";
	char input_psd[7];
	int i;
	printf("please input the password\n");
	scanf("%s",input_psd);
	if(strlen(psd) !=6)
	{
		printf("enter the password is invaild\n");
	}
	for(i = 0;i < 6;i++)
	{
		if(psd[i] != input_psd[i])
		{
			printf("enter the password is wrong\n");
			break;
		}
	} 
	if(i ==6)
		{
			printf("enter the password is correct\n");
			
		}
	
	
return 0;
}

