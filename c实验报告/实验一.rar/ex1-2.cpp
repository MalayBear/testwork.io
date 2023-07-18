#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("请输入三个整数"); 
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(b>c)
		printf("max=%d\n",a);
	}
	else
	{
		if(a>c)
		{
			printf("max=%d",b);
		
		}
		if(a<c)
		printf("max=%d",c);
	}

	return 0;
}

