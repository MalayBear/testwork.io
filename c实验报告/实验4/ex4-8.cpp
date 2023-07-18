#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b){
		a=a + b;
		b=a - b;
		a=a - b;
	}
	if(a>c){
		a=a + c;
		c=a - c;
		a=a - c;
	}
	printf("min=%d\n",a);
return 0;
}

