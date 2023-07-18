#include<stdio.h>
int main(){
	int n;
	int mul;
for( n=1;n<50;n++){
	mul=1;
	for(int i=1;i<=n;i++)
	{
		mul=mul*i;
		
	}
	if(mul>5000)
	{
		break;
	}
	
}
 printf("n=%d,mul=%d\n",n,mul);	
return 0;
}

