#include<stdio.h>
int main()
{
	char x;
	printf("Please enter the character£º");
	scanf("%c",&x);
	if(x>'a'&&x<'z'){
	
	x=x-32;
}

	printf("The Change Result is£º%c\n",x);

return 0;
}


