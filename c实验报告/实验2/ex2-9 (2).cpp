#include<stdio.h>
int main()
{
	
	
char  x;
	printf("Please enter the character£º\n");
	scanf("%c",&x);

	
	if(x>='a'&&x<='z'){
		x-=32;
		
	}
	 else if(x>='A'&&x<='Z'){
	
	x+=32;
}


	printf("The Change Result is£º%c\n",x);


	

	return 0;
}
