#include<stdio.h>
int main(){
		printf("Please enter your passwords:\n");
	char a,b,c,d,e;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);                                    
/*输入5个字符并分别保存在a、b、c、d、e变量中*/
       if( a=='h'&&b=='e'&&c=='l'&&d=='l'&&e=='o' )
       {
	   
		printf("You can enter the next part!\n");
	}
		     else{
		     	printf("You had input the wrong password!\n");
			 }     
              

return 0;
}

