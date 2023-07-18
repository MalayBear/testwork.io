#include<stdio.h>
int main(){
	printf("*****TIME*****\n");
	printf("1,morning\n");
	printf("2,afternoon\n");
	printf("3,night\n");
	enum time{m=1,a,n} t;
	printf("please enter you choice:\n");
	scanf("%d",&t);
	switch(t){
		case m:puts("morning");break;
		case a:puts("afternoon");break;
		case n:puts("night");break;
		default :puts("selection Error");
	}
	
return 0;
}

