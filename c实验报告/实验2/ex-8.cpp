#include<stdio.h>
int main()
{
	char x;
	printf("Please enter the character��");
	scanf("%c",&x);
	if(x>'a'&&x<'z'){
	
	x=x-32;
}

	printf("The Change Result is��%c\n",x);

return 0;
}


