#include<stdio.h>
#include <time.h>
#include <math.h>
#define NONE 0
// ����׳�
int factorial(int n) {// �ݹ麯��

    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// �������ʽϵ��
int binomialCoefficient(int n, int k) {

    if (k > n) {
        return 0;
    }
    else {
        int numerator = factorial(n);
        int denominator = factorial(k) * factorial(n - k);
        return numerator / denominator;
    }
}

// ����������A
int calculate__Permutation(int n, int k) {
    return factorial(n) / factorial(n - k);
}

// �������ֲ��ĸ���P��X=k)=C (n,k)��p^k��* (1-p)^ (n-k)
double calculateBinomialDistribution(int n, int k, double p) {
    return binomialCoefficient(n, k) * pow(p, k) * pow(1 - p, n - k);
}

// ����ʽչ��
void polynomialExpansion(int n) {
    printf("����ʽչ��ʽΪ��");
    for (int i = 0; i <= n; i++) {
        int coefficient = binomialCoefficient(n, i);
        printf("%dx^%d ", coefficient, i);
        if (i < n) {
            printf("+ ");
        }
    }
    printf("\n");
}

// ��ӡ���������
void printPascalTriangle(int n) {
    printf("��������Σ�\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            int coefficient = binomialCoefficient(i, j);
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}
// ����������
int Permutation(int n, int k) {
    return factorial(n) / factorial(n - k);
}
// ���������
int calculateCombination(int n, int k) {
    return binomialCoefficient(n, k);
}
//��壬ִ�к��� 
double fact(int n)
{
    double fact = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
} 
 
void before_func()
{
    printf("������ʼִ��...\n");
}

void after_func()
{
    printf("����ִ�н���...\n");
}
void func_to_time()
{
    printf("���ڼ�ʱ�ĺ���\n");
} 
//����ʱ��
void plug_func(void (*before)(), void (*after)(), void (*func)(), double *time_diff)
{
	clock_t start_time, end_time;
	start_time = clock();
	before();
	func();
	after();
	end_time = clock();
	*time_diff = (double)(end_time - start_time) / CLOCKS_PER_SEC;
	printf("����ִ��ʱ�䣺%.6f ��\n", *time_diff);
}
//쳲���������
int fib(int index) {
    // ���ý����ݹ����������
    if (index == 1 || index == 2) {
        return 1;
    }
    return fib(index - 1) + fib(index - 2);
}
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
//�ù��Ӻ���ʵ�ּ����� 
int add(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multi(int a, int b) { return a * b; }
int dev(int a, int b) { return a / b; }
 
 
typedef struct handle_cb{
	int type;
	int (*handle)(int a, int b);
}HANDLE_CB;
 
/* 
ע�ṳ�ӣ�������ʽ�ذ���Ϣ���ͺ͹��Ӻ�����Ӧ��ϵ���ֳ����ˣ�
handle_cb�����type���Բ�Ҫ�ģ�ע��ά����ע����Ϣ����
ÿ��ö��ֵ�Ⱥ�˳������湳�Ӻ������е��Ⱥ�˳��һ�£��ܶ�Ӧ��
������ 
*/
/* ע����Ϣ */

enum{
	
OPER_TYPE_ADD = 0, //�� 
OPER_TYPE_MINUS, //�� 
OPER_TYPE_MULTI, //�� 
OPER_TYPE_DEV, //�� 
OPER_TYPE_MAX

};
HANDLE_CB g_handle [] = {
	{ OPER_TYPE_ADD, add },
	{ OPER_TYPE_MINUS, minus },
	{ OPER_TYPE_MULTI, multi },
	{ OPER_TYPE_DEV, dev}
};
//��ֺ��� 
void pl(int n, int m, int a[], int o, int *p) {
	for (int i = m; n - i > i; i++) {
		(*p)++;
		a[o] = i;
		a[o + 1] = n - i;
		for (int j = 0; j <= o + 1; j++)
			printf("%d ", a[j]);
		printf("\n");
		pl(n - i, i + 1, a, o + 1, p);
	}
}

void plsame(int n, int m, int a[], int o, int *p) {
	for (int i = m; n - i >= i; i++) {
		(*p)++;
		a[o] = i;
		a[o + 1] = n - i;
		for (int j = 0; j <= o + 1; j++)
			printf("%d ", a[j]);
		printf("\n");
		plsame(n - i, i, a, o + 1, p);
	}

}
//����ö�٣����û�ѡ����
enum Option 
{
    FACT = 1,//�׳� 
    BIN,//����ʽϵ�� 
    PERMUTATION,
    NUM_PER,//��������� 
    SPILE,//��� 
    FIB,//쳲�����
	CAT,//������
	HOOK,//����
	SPLIT,//��ֺ��� 
};
//����ʽ���� 
enum Menu 
{
    BINOMIAL_DIST = 1,      // �������ֲ��ĸ���
    POLYNOMIAL_EXP,     // ����ʽչ��
    PRINT_YANGHUI_TRI   // ��ӡ���������
};
//���
enum Make
{
	INSERT_SORT = 1,//�������
	RUN_TIME ,//��������ʱ�� 
}; 

//쳲��������к��� 
enum ADD
{
	RAB_RE = 1,
	RECT_COVER,
	FROG_JUMP	
}; 
//���������� 
enum CAT
{
	BINARY_TREE = 1,
	PARENTH_MATCH,
	STACK_SE,
	CHANGE_ISSUE	
};

int main(){
	printf("\033[1;32m");
	printf("����������������������Ŀ¼:�����ѧ������������������������������\n\n\n");
	printf("\033[0m");
	printf("\033[1;33m");
	printf(" 1.�׳˺�������������������������\n\n");
	printf(" 2.����ʽϵ����������������������\n\n");
	printf(" 3.������������������������������\n\n");
	printf(" 4.�����������������������������\n\n");
	printf(" 5.��巨������������������������\n\n");
	printf(" 6.쳲��������к�����������������\n\n");
	printf(" 7.������������������������������\n\n");
	printf(" 8.���ӹ�ʽ����������������������\n\n");
	printf(" 9.�����������������������������\n\n");
	printf("10.�˳�����ϵͳ\n\n\n");
	printf("\033[0m");
	int option;
	do
 {	
	printf("\n");
	printf("�����������˽�ĺ���\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{	
				option = FACT;
				printf("\033[1;36m");
				printf("\n\n");
				printf(" *************�׳˺���**************\n\n");
				printf("\n");
				printf("\033[0m");
				int n, m = 1, a = 1;
				double sum = 0;
				printf("���n��");
				scanf("%d", &n);
				for (int i = 1; i < n + 1; i++) 
				{
					m = m * i;
				}
				printf("n!=%d\n", m);
				for (int i = 1; i < n + 1; i++) 
				{
					a = 1;
					for (int j = 1; j < i + 1; j++) 
					{
						a = a * j;
					}
					sum = sum + a;
				}
				printf("�׳����:%.0lf\n", sum);
				break;
			}
		case 2:
			{	
				int optionA ;
				option = BIN;
				printf("\033[1;36m");
				printf("\n\n");
				printf("********* ����ʽϵ���������� ********\n\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
		        printf("1. ����ʽչ��\n\n");
		        printf("2. ��ӡ���������\n\n");
		        printf("3.�˳��ú���\n\n");
		    do{
				    printf("����������ʵ�ֵĶ���ʽϵ����������\n");
				    printf("\n");
				    printf("\033[0m");
					scanf("%d",&optionA);
				switch(optionA)
				{
				
				
					case 1:
					{	
						optionA = POLYNOMIAL_EXP;
						int n;
						printf("���������ʽ�Ľ�����\n\n");
						printf("\n");
			            scanf("%d", &n);
			            polynomialExpansion(n);
			            break;
					}
					case 2:
					{	
						optionA = PRINT_YANGHUI_TRI;
						int n;
						printf("\n");
						printf("��������������ε�������\n\n");
			            scanf("%d", &n);
			            printPascalTriangle(n);
			            optionA = 0; 
			            break;
					}
				 case 3:
			        {
			            printf("���˳�����ʽϵ���������ܡ�\n");
			            break;
			        }
			        default:
			            printf("��Ч��ѡ��\n");
			            break;
			        }
			    } while (optionA != 3);
			    break;
			}

		case 3:
					
			{	printf("\033[1;36m");
				printf("\n\n");
				printf("********* ���к������� ********\n\n");
				printf("\n");
				printf("\033[0m") ; 
				option = PERMUTATION;
				int n,k;
				printf("����������n��k(n��kҪ��)��\n");
				scanf("%d%d", &n, &k);
				printf("������P(%d %d) = %d\n", n, k, Permutation(n, k));
			    break;	
			}
		case 4:
			{	
				option = NUM_PER;
				printf("\033[1;36m");
				printf("\n\n");
				printf(" *************��Ϻ���**************\n\n");
				printf("\n");
				printf("\033[0m");
				int n,k;
				printf("����������n��k��\n");
            	scanf("%d%d", &n, &k);
            	printf("�����C(%d, %d) = %d\n", n, k, calculateCombination(n, k));
            	break;
				
			}
	case 5:
{
    option = SPILE;
    printf("\033[1;36m");
    printf("\n\n");
    printf("********* ��庯������ ********\n\n");
    printf("\n");
    printf("\033[0m");
    printf("\033[1;34m");
    printf("1. �������\n\n");
    printf("2. ��������ʱ��ļ���\n\n");
    printf("3.�˳��ú���\n\n");
    printf("\033[0m");
    int optionB;
    do
    {	printf("\n\n");
        printf("����������ʵ�ֵĲ�庯������\n\n");
        
        scanf("%d", &optionB);
        switch (optionB)
        {
        case 1:
        {
            optionB = INSERT_SORT;
            int m, n;
            double result;
            printf("����n��m: ");
            scanf("%d %d", &m, &n);
            result = fact(n) / fact(m) / fact(n - m);
            printf("�������Ϊ��result = %.0lf\n", result);
            break;
        }
        case 2:
        {
            optionB = RUN_TIME;
            void (*func_ptr)() = func_to_time;
            double time_diff = 0;
            plug_func(before_func, after_func, func_ptr, &time_diff);
            printf("����ִ��ʱ�䣺%.6f ��\n", time_diff);
            break;
        }
        case 3:
        {
            printf("���˳���庯�����ܡ�\n");
            break;
        }
        default:
            printf("��Ч��ѡ��\n");
            break;
        }
    } while (optionB != 3);
    break;
}

case 6:
{
    option = FIB;
    printf("\033[1;36m");
    printf("\n\n");
    printf("***********쳲��������У�Fibonacci sequence��***************\n");
    printf("\n");
    printf("\033[0m");
    printf("\033[1;34m");
    printf("쳲��������У�Fibonacci sequence�����ֳƻƽ�ָ�����\n�����������ѧ�������ɶࡤ쳲�������Leonardo Fibonacci��1202�������ӷ�ֳΪ���Ӷ�����\n�����ֳ�Ϊ���������С���ָ��������һ�����У�\n\n\n\n");
    printf("\033[0m");
    int optionC;
    do
    {
        // ���ǰ 10 ����
        printf("\n\n\n\n");
        printf("\033[1;36m");
        printf("\n\n");
        printf("##########��쳲��������н��Ӧ������##############\n");
        printf("\n");
        printf("\033[0m");
        printf("\033[1;34m");
        printf("(1)���ӷ�ֳ���⣺һ������ÿ����������һ��С����\nһ���Ժ���Է�ֳ���ٶ����ӣ�\n\n\n");
        printf("(2)������̨�����⣺һ��̨���ܹ���n����һ������һ�ο�����1����Ҳ������2����\n����������n��̨���ܹ��ж���������\n\n");
        printf("(3)�˳��ú���\n\n");
        printf("\033[0m");
        printf("��������������ʵ����������\n\n");
        int n;
        scanf("%d", &optionC);
        switch (optionC)
        {
        case 1:
        {
            optionC = RAB_RE;
            int month;
            int young = 1;
            int adult = 0;
            int total = 0;
            printf("����������Ҫ�������·�����\n");
            scanf("%d", &month);
            printf("��������\t���̶���\t���ö���\t���ö���\n");
            for (int i = 0; i < month; i++)
            {
                if (i > 0 && i % 3 == 0)
                {
                    //ÿ3�������õ�����
                    adult += young;
                    young = 0;
                }
                total = young + adult;
                printf("%d\t\t%d\t\t%d\t\t%d\n\n", i + 1, young, adult, total);
                young = total;
            }
            break;
        }
        
        case 2:
        {
            optionC = FROG_JUMP;
            int step;
            printf("������������Ҫ����̨����̨������\n");
            scanf("%d", &n);
            int result = fib(n);
            printf("һ����%d������\n", result);
            optionC = 0;
            break;
        }
        case 3:
        {
            printf("���˳�쳲������������ܡ�\n");
            break;
        }
        default:
            printf("��Ч��ѡ��\n");
            break;
        }
    } while (optionC != 3);
    break;
}

	case 7:
			{	
				option = CAT;
				printf("\033[1;36m");
				printf("\n\n");
				printf("**************��������(Catalan number)************\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
				printf("���������������ѧ��һ���������ڸ��ּ��������е�����\n");
				printf("catalan���������ʽ [3] ��h(n)= h(0)*h(n-1)+h(1)*h(n-2) + ... + h(n-1)*h(0) (n��2)\n\n\n\n");
				printf("\033[0m");
				int i;
			    int n;
			    int optionD;
		
			
			    printf("\n\n\n\n");
			    printf("\033[1;36m");
			    printf("\n\n");
			    printf("##########�ÿ����������Ӧ������##############\n\n");
			    printf("\n");
			    printf("\033[0m");
			    printf("\033[1;34m");
			    printf("(1)n������������:n���ڵ㹹�ɵĶ����������ж���������?\n\n");
			    printf("(2)����ƥ������:n�������ж�����ƥ�䷽ʽ?\n\n");
				printf("(3)͹��ջ���У�һ��ջ(�����)�Ľ�ջ����Ϊ1��2��3����\n�ж��ٸ���ͬ�ĳ�ջ����?\n\n");
				printf("(4)�������⣺��2n�����ų�һ�н���糡���볡��5Ԫ��\n����ֻ��n������һ��5Ԫ��Ʊ������n��ֻ��10Ԫ��Ʊ\n��Ժ��������Ʊ�����ж����ַ���ʹ��ֻҪ��10Ԫ������Ʊ����Ʊ������5Ԫ�ĳ�Ʊ���㣿\n\n\n");
				printf("(5)�˳��ú���\n\n");
				printf("\033[0m");
			do{
				printf("��������������ʵ����������\n\n");
				scanf("%d",&optionD);
				switch(optionD)
				{
					case 1:
						{
							optionD = BINARY_TREE;
							int point;
						    printf("������Ҫ���ٸ��ڵ㹹�ɵĶ�����\n ");
						    scanf("%d", &point);
						    printf("%d���ڵ㹹�ɵĶ���������%lu������\n\n", point, catalan(n));
							break; 
							
						}
							case 2:
								{	
									optionD = PARENTH_MATCH;
									int bracket;
								    printf("����������\n ");
								    scanf("%d", &bracket);
								    printf("%d��������%lu��ƥ�䷽ʽ\n\n", bracket, catalan(n));
									break;	
								}
							
							case 3:
								{	
									optionD = STACK_SE;
									int degree;
								    printf("������ջ�Ĵ�С��");
								    scanf("%d", &degree);
								    printf("��ͬ��͹��ջ���е�����Ϊ��%llu\n\n",catalan(degree) );	
					    			break; 
								}
							
							case 4:
								{	
									optionD = CHANGE_ISSUE;
									int num;
									printf("�������ų�һ�н���糡������\n\n");
								    scanf("%d", &num);
								    printf("��%lld�ַ���ʹ��ֻҪ��10Ԫ������Ʊ����Ʊ������5Ԫ�ĳ�Ʊ����\n\n",catalan(num) );
								    optionD = 0;
								    break; 
								}
						case 5:
				        {
				            printf("���˳��������������ܡ�\n");
				            break;
				        }
				            default:
				            printf("��Ч��ѡ��\n");
				            break;
				    }
				    } while (optionD != 5);
				    break;
				       
				
          }
			 
		case 8:
{
    option = HOOK;
    printf("\033[1;36m");
    printf("\n\n");
    printf("**************���Ӻ�����Ӧ��************\n");
    printf("\n");
    printf("\033[0m");
    printf("\033[1;34m");
    printf("****���������***\n");
    printf("\n");
    printf("1.�ӷ�\n 2.����\n 3.�˷�\n 4.����\n 5.�˳�\n");
    printf("\n");
    printf("\033[1;43m");
    printf("\033[0m");
    int optionE;
    do {
        printf("������Ҫִ�е�Ч��\n\n");
        int i;
        int type;
        int x, y;
        int (*func)(int x, int y);
        optionE = 0;
        while (optionE != 1 && optionE != 2 && optionE != 3 && optionE != 4 && optionE != 5) {
            printf("������ѡ�");
            scanf("%d", &optionE);
            if (optionE != 1 && optionE != 2 && optionE != 3 && optionE != 4 && optionE != 5) {
                printf("��Ч��ѡ����������롣\n");
            }
        }
        if (optionE != 5) {
            printf("��������������\n");
            scanf("%d %d", &x, &y);
            switch(optionE) {
                case 1:
                    {
                        optionE = OPER_TYPE_ADD;
                        func = add;
                        func = g_handle[optionE].handle;
                        printf("���ս����%d\n",func(x, y));
                        break;
                    }
                case 2:
                    {
                        optionE = OPER_TYPE_MINUS;
                        func = minus;
                        func = g_handle[optionE].handle;
                        printf("���ս����%d\n",func(x, y));
                        break;
                    }
                case 3:
                    {
                        optionE = OPER_TYPE_MULTI;
                        func = multi;
                        func = g_handle[optionE].handle;
                        printf("���ս����%d\n",func(x, y));
                        break;
                    }
                case 4:
                    {
                        optionE = OPER_TYPE_DEV;
                        func = dev;
                        func = g_handle[optionE].handle;
                        printf("���ս����%d\n",func(x, y));
                        break;
                    }
                    case 5:
				    {
				            printf("���˳����Ӻ������ܡ�\n");
				            break;
				    }
                default:
                    printf("��Ч��ѡ��\n");
                    break;
			            }
			        }
			        printf("\n");
			    } while (optionE != 5);
			    break;
			}

			case 9 :
				{
					option = SPLIT;
					printf("\033[1;36m");
					printf("\n\n");
					printf("***********���������************\n");
					printf("\n");
					printf("\033[0m");
					printf("\033[1;34m");
					printf("������������ǰ�n���ֳ�����Ԫ�ز�����n����ϡ�\n");
					printf("��n=4Ϊ����4=1+1+1+1=2+1+1=2+2=3+1\n");
					printf("���ظ�Ԫ��Ϊ:{1,3}\n");
					printf("���ظ�Ԫ��Ϊ{1��1��1��1}��{2��1��1}��{2��2}\n\n\n\n");
					printf("\033[0m");
					int n, m, a[100], count = 0;
					printf("����n\n");
					scanf("%d", &n);
					int *p = &count;
					printf("*********************\n");
					pl(n, 1, a, 0, p);
					printf("���ظ�Ԫ�ؿ��Էֳ�����%d��.\n", count);
					printf("*********************\n");
					count = 0;
					plsame(n, 1, a, 0, p);
					printf("���ظ�Ԫ�ؿ��Էֳ�����%d��.\n", count);
					printf("*********************\n");
					break; 
				}
					 case 10:
			            printf("�˳�ϵͳ\n");
			            break;
			        default:
			            printf("��Ч��ѡ��\n");
			            break;
			    }
			} 
					while(option != 10);
			
			return 0;
		}
				

			
			   
			
			 
	
			
			
	
	

	



		
	
	



