#include<stdio.h>
int main(){
float x,y;
char c;
double result;
scanf("%f %c %f",&x,&c,&y);
switch(c)
{
      case '+': result=x+y;break;
      case '-': result=x-y;break;
      case '*': result=x*y;break;
      case '/': result=x/y;break;
      default: printf("error\n");break;
                
}printf("the result of %f%c%fis %lf",x,c,y,result );

return 0;
}

