#include<stdio.h>
//���������� 
long long catalan(int n) 
{
    if (n <= 1)
	{ 
        return 1;
	}
    long long res = 0;
    for (int i = 0; i < n; i++)
	{
		 
        res += catalan(i) * catalan(n - i - 1);
	}
    return res;
}
typedef struct {
    int x, y;
} Point;

//���������Ĳ��
int cross_product(Point a, Point b, Point c)
{
    int ac_x = c.x - a.x;
    int ac_y = c.y - a.y;
    int ab_x = b.x - a.x;
    int ab_y = b.y - a.y;
    return ac_x * ab_y - ab_x * ac_y;
}

int main()
{	printf("**************��������(Catalan number)************\n");
	printf("���������������ѧ��һ���������ڸ��ּ��������е�����\n");
	printf("catalan���������ʽ [3] ��h(n)= h(0)*h(n-1)+h(1)*h(n-2) + ... + h(n-1)*h(0) (n��2)\n\n\n\n");
	 int i;
    int n;
    printf("������һ��10���ڵ������\n");
    scanf("%d",&n);
    // ���ǰ 10 ����
    printf("�����ǿ��������У�\n");
    for (i = 1; i <= n; i++) {
        printf("%lld ", catalan(i));
    }
    
    printf("\n\n\n\n");
    printf("##########�ÿ����������Ӧ������##############\n\n");
    printf("(1)n������������:n���ڵ㹹�ɵĶ����������ж���������?\n\n");
    printf("(2)����ƥ������:n�������ж�����ƥ�䷽ʽ?\n\n");
	printf("(3)͹��ջ���У�һ��ջ(�����)�Ľ�ջ����Ϊ1��2��3����\n�ж��ٸ���ͬ�ĳ�ջ����?\n\n");
	printf("(4)�������⣺��2n�����ų�һ�н���糡���볡��5Ԫ��\n����ֻ��n������һ��5Ԫ��Ʊ������n��ֻ��10Ԫ��Ʊ\n��Ժ��������Ʊ�����ж����ַ���ʹ��ֻҪ��10Ԫ������Ʊ����Ʊ������5Ԫ�ĳ�Ʊ���㣿\n\n\n");
	while(1)
{
	int choice;
	printf("��������������ʵ����������\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				int point;
			    printf("������Ҫ���ٸ��ڵ㹹�ɵĶ�����\n ");
			    scanf("%d", &point);
			    printf("%d���ڵ㹹�ɵĶ���������%lu������\n\n", point, catalan(n));
				break; 
			}
		case 2:
			{
				int bracket;
			    printf("����������\n ");
			    scanf("%d", &bracket);
			    printf("%d��������%lu��ƥ�䷽ʽ\n\n", bracket, catalan(n));
				break;	
			}
		
		case 3:
			{
				int degree;
			    printf("������ջ�Ĵ�С��");
			    scanf("%d", &degree);
			    printf("��ͬ��͹��ջ���е�����Ϊ��%llu\n\n",catalan(degree) );	
    			break; 
			}
		
		case 4:
			{
				int num;
				printf("�������ų�һ�н���糡������\n\n");
			    scanf("%d", &num);
			    printf("��%lld�ַ���ʹ��ֻҪ��10Ԫ������Ʊ����Ʊ������5Ԫ�ĳ�Ʊ����\n\n",catalan(num) );
			    break; 
			}
			default :
				break;
			
				
	}
}
}

