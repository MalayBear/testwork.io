#include<stdio.h>
int main(){
	char a,b;
	 printf("enter a Character:\n");
	 a=getchar();
//	 scanf("%c",&ch);
	 if(a>='a'&&a<='z'){
	 	b=a-32;
	
	 }
	 else if(a>='A'&&b<='Z'){
	 	b=a+32;
	 
	 }
	 	
	 putchar(b);

return 0;
}

