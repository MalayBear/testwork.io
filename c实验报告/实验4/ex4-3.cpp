#include<stdio.h>
int main(){
	int a,b,c;
	int t;
	printf("����������\n");
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
	printf("������������Ϊ %d %d %d",a,b,c);
	

return 0;
}

