#include <stdio.h>
int main()
{
	double a, rate;
	int  c,tax,profit;
	printf("���뽱������");
	scanf("%lf",&a);
	if(a>=5000)c=10;
	else c=a/500;
	switch(c) {
		case 0: rate=0; break;
		case 1: rate=0.05; break;
		case 2:
		case 3:
		case 4: rate=0.08; break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: rate=0.10; break;
		case 10: rate=0.15; break;
			}
	tax=(a*rate);
	profit=(int)(a-tax);
	printf("˰��Ϊ%lf,Ӧ��˰��Ϊ%d,ʵ�ý�����Ϊ%d\n",rate,tax,profit);
	return 0;
}
