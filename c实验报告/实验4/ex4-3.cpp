#include<stdio.h>
int main(){
	int a,b,c;
	int t;
	printf("输入三个数\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		t=a;
		a=b;
		b=t;
}
	if(a>c){
		t=a;
		a=c;
		c=t;
	}
	if(c<b){
		t=b;
		b=c;
		c=t;
	}
	printf("倒序后的三个数为 %d %d %d",a,b,c);
	

return 0;
}

