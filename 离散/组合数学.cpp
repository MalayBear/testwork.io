#include<stdio.h>
#include <time.h>
#include <math.h>
#define NONE 0
// 计算阶乘
int factorial(int n) {// 递归函数

    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// 计算二项式系数
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

// 计算排列数A
int calculate__Permutation(int n, int k) {
    return factorial(n) / factorial(n - k);
}

// 计算二项分布的概率P（X=k)=C (n,k)（p^k）* (1-p)^ (n-k)
double calculateBinomialDistribution(int n, int k, double p) {
    return binomialCoefficient(n, k) * pow(p, k) * pow(1 - p, n - k);
}

// 多项式展开
void polynomialExpansion(int n) {
    printf("多项式展开式为：");
    for (int i = 0; i <= n; i++) {
        int coefficient = binomialCoefficient(n, i);
        printf("%dx^%d ", coefficient, i);
        if (i < n) {
            printf("+ ");
        }
    }
    printf("\n");
}

// 打印杨辉三角形
void printPascalTriangle(int n) {
    printf("杨辉三角形：\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            int coefficient = binomialCoefficient(i, j);
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}
// 计算排列数
int Permutation(int n, int k) {
    return factorial(n) / factorial(n - k);
}
// 计算组合数
int calculateCombination(int n, int k) {
    return binomialCoefficient(n, k);
}
//插板，执行函数 
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
    printf("函数开始执行...\n");
}

void after_func()
{
    printf("函数执行结束...\n");
}
void func_to_time()
{
    printf("正在计时的函数\n");
} 
//插板计时器
void plug_func(void (*before)(), void (*after)(), void (*func)(), double *time_diff)
{
	clock_t start_time, end_time;
	start_time = clock();
	before();
	func();
	after();
	end_time = clock();
	*time_diff = (double)(end_time - start_time) / CLOCKS_PER_SEC;
	printf("函数执行时间：%.6f 秒\n", *time_diff);
}
//斐波那契函数
int fib(int index) {
    // 设置结束递归的限制条件
    if (index == 1 || index == 2) {
        return 1;
    }
    return fib(index - 1) + fib(index - 2);
}
//卡特兰函数 
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

//两个向量的叉积
int cross_product(Point a, Point b, Point c)
{
    int ac_x = c.x - a.x;
    int ac_y = c.y - a.y;
    int ab_x = b.x - a.x;
    int ab_y = b.y - a.y;
    return ac_x * ab_y - ab_x * ac_y;
}
//用钩子函数实现计算器 
int add(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multi(int a, int b) { return a * b; }
int dev(int a, int b) { return a / b; }
 
 
typedef struct handle_cb{
	int type;
	int (*handle)(int a, int b);
}HANDLE_CB;
 
/* 
注册钩子，这里显式地把消息类型和钩子函数对应关系体现出来了，
handle_cb里面的type可以不要的，注意维护好注册消息表中
每个枚举值先后顺序和下面钩子函数表中的先后顺序一致，能对应上
就行了 
*/
/* 注册消息 */

enum{
	
OPER_TYPE_ADD = 0, //加 
OPER_TYPE_MINUS, //减 
OPER_TYPE_MULTI, //乘 
OPER_TYPE_DEV, //除 
OPER_TYPE_MAX

};
HANDLE_CB g_handle [] = {
	{ OPER_TYPE_ADD, add },
	{ OPER_TYPE_MINUS, minus },
	{ OPER_TYPE_MULTI, multi },
	{ OPER_TYPE_DEV, dev}
};
//拆分函数 
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
//运用枚举，供用户选择函数
enum Option 
{
    FACT = 1,//阶乘 
    BIN,//二项式系数 
    PERMUTATION,
    NUM_PER,//组合数函数 
    SPILE,//插板 
    FIB,//斐波那契
	CAT,//卡特兰
	HOOK,//钩子
	SPLIT,//拆分函数 
};
//二项式函数 
enum Menu 
{
    BINOMIAL_DIST = 1,      // 计算二项分布的概率
    POLYNOMIAL_EXP,     // 多项式展开
    PRINT_YANGHUI_TRI   // 打印杨辉三角形
};
//插板
enum Make
{
	INSERT_SORT = 1,//插板排序
	RUN_TIME ,//计算运行时间 
}; 

//斐波那契数列函数 
enum ADD
{
	RAB_RE = 1,
	RECT_COVER,
	FROG_JUMP	
}; 
//卡特兰函数 
enum CAT
{
	BINARY_TREE = 1,
	PARENTH_MATCH,
	STACK_SE,
	CHANGE_ISSUE	
};

int main(){
	printf("\033[1;32m");
	printf("···········目录:组合数学···············\n\n\n");
	printf("\033[0m");
	printf("\033[1;33m");
	printf(" 1.阶乘函数···········\n\n");
	printf(" 2.二项式系数函数········\n\n");
	printf(" 3.排列数函数··········\n\n");
	printf(" 4.组合数函数··········\n\n");
	printf(" 5.插板法函数··········\n\n");
	printf(" 6.斐波那契数列函数·······\n\n");
	printf(" 7.卡特兰数函数·········\n\n");
	printf(" 8.钩子公式函数·········\n\n");
	printf(" 9.拆分数函数··········\n\n");
	printf("10.退出函数系统\n\n\n");
	printf("\033[0m");
	int option;
	do
 {	
	printf("\n");
	printf("请输入你想了解的函数\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{	
				option = FACT;
				printf("\033[1;36m");
				printf("\n\n");
				printf(" *************阶乘函数**************\n\n");
				printf("\n");
				printf("\033[0m");
				int n, m = 1, a = 1;
				double sum = 0;
				printf("输出n：");
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
				printf("阶乘求和:%.0lf\n", sum);
				break;
			}
		case 2:
			{	
				int optionA ;
				option = BIN;
				printf("\033[1;36m");
				printf("\n\n");
				printf("********* 二项式系数函数功能 ********\n\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
		        printf("1. 多项式展开\n\n");
		        printf("2. 打印杨辉三角形\n\n");
		        printf("3.退出该函数\n\n");
		    do{
				    printf("请输入你想实现的二项式系数函数功能\n");
				    printf("\n");
				    printf("\033[0m");
					scanf("%d",&optionA);
				switch(optionA)
				{
				
				
					case 1:
					{	
						optionA = POLYNOMIAL_EXP;
						int n;
						printf("请输入多项式的阶数：\n\n");
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
						printf("请输入杨辉三角形的行数：\n\n");
			            scanf("%d", &n);
			            printPascalTriangle(n);
			            optionA = 0; 
			            break;
					}
				 case 3:
			        {
			            printf("已退出二项式系数函数功能。\n");
			            break;
			        }
			        default:
			            printf("无效的选项\n");
			            break;
			        }
			    } while (optionA != 3);
			    break;
			}

		case 3:
					
			{	printf("\033[1;36m");
				printf("\n\n");
				printf("********* 排列函数功能 ********\n\n");
				printf("\n");
				printf("\033[0m") ; 
				option = PERMUTATION;
				int n,k;
				printf("请输入整数n和k(n比k要大)：\n");
				scanf("%d%d", &n, &k);
				printf("排列数P(%d %d) = %d\n", n, k, Permutation(n, k));
			    break;	
			}
		case 4:
			{	
				option = NUM_PER;
				printf("\033[1;36m");
				printf("\n\n");
				printf(" *************组合函数**************\n\n");
				printf("\n");
				printf("\033[0m");
				int n,k;
				printf("请输入整数n和k：\n");
            	scanf("%d%d", &n, &k);
            	printf("组合数C(%d, %d) = %d\n", n, k, calculateCombination(n, k));
            	break;
				
			}
	case 5:
{
    option = SPILE;
    printf("\033[1;36m");
    printf("\n\n");
    printf("********* 插板函数功能 ********\n\n");
    printf("\n");
    printf("\033[0m");
    printf("\033[1;34m");
    printf("1. 插板排序\n\n");
    printf("2. 函数运行时间的计算\n\n");
    printf("3.退出该函数\n\n");
    printf("\033[0m");
    int optionB;
    do
    {	printf("\n\n");
        printf("请输入你想实现的插板函数功能\n\n");
        
        scanf("%d", &optionB);
        switch (optionB)
        {
        case 1:
        {
            optionB = INSERT_SORT;
            int m, n;
            double result;
            printf("输入n和m: ");
            scanf("%d %d", &m, &n);
            result = fact(n) / fact(m) / fact(n - m);
            printf("函数结果为：result = %.0lf\n", result);
            break;
        }
        case 2:
        {
            optionB = RUN_TIME;
            void (*func_ptr)() = func_to_time;
            double time_diff = 0;
            plug_func(before_func, after_func, func_ptr, &time_diff);
            printf("函数执行时间：%.6f 秒\n", time_diff);
            break;
        }
        case 3:
        {
            printf("已退出插板函数功能。\n");
            break;
        }
        default:
            printf("无效的选项\n");
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
    printf("***********斐波那契数列（Fibonacci sequence）***************\n");
    printf("\n");
    printf("\033[0m");
    printf("\033[1;34m");
    printf("斐波那契数列（Fibonacci sequence），又称黄金分割数列\n，因意大利数学家莱昂纳多·斐波那契（Leonardo Fibonacci）1202年以兔子繁殖为例子而引入\n，故又称为“兔子数列”，指的是这样一个数列：\n\n\n\n");
    printf("\033[0m");
    int optionC;
    do
    {
        // 输出前 10 个数
        printf("\n\n\n\n");
        printf("\033[1;36m");
        printf("\n\n");
        printf("##########用斐波那契数列解决应用问题##############\n");
        printf("\n");
        printf("\033[0m");
        printf("\033[1;34m");
        printf("(1)兔子繁殖问题：一对兔子每个月能生出一对小兔子\n一年以后可以繁殖多少对兔子？\n\n\n");
        printf("(2)青蛙跳台阶问题：一个台阶总共有n级，一个青蛙一次可以跳1级，也可以跳2级。\n求青蛙跳上n级台阶总共有多少总跳法\n\n");
        printf("(3)退出该函数\n\n");
        printf("\033[0m");
        printf("请输入你想解决的实际问题的序号\n\n");
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
            printf("请输入兔子要经过的月份数：\n");
            scanf("%d", &month);
            printf("经过月数\t幼崽对数\t成兔对数\t总兔对数\n");
            for (int i = 0; i < month; i++)
            {
                if (i > 0 && i % 3 == 0)
                {
                    //每3个月幼兔到成兔
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
            printf("请输入青蛙需要跳的台阶数台阶数：\n");
            scanf("%d", &n);
            int result = fib(n);
            printf("一共有%d种跳法\n", result);
            optionC = 0;
            break;
        }
        case 3:
        {
            printf("已退出斐波那契函数功能。\n");
            break;
        }
        default:
            printf("无效的选项\n");
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
				printf("**************卡特兰数(Catalan number)************\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
				printf("卡特兰数是组合数学中一个常出现于各种计数问题中的数列\n");
				printf("catalan数满足递推式 [3] ：h(n)= h(0)*h(n-1)+h(1)*h(n-2) + ... + h(n-1)*h(0) (n≥2)\n\n\n\n");
				printf("\033[0m");
				int i;
			    int n;
			    int optionD;
		
			
			    printf("\n\n\n\n");
			    printf("\033[1;36m");
			    printf("\n\n");
			    printf("##########用卡特兰数解决应用问题##############\n\n");
			    printf("\n");
			    printf("\033[0m");
			    printf("\033[1;34m");
			    printf("(1)n结点二叉树问题:n个节点构成的二叉树，共有多少种情形?\n\n");
			    printf("(2)括号匹配问题:n对括号有多少种匹配方式?\n\n");
				printf("(3)凸出栈序列：一个栈(无穷大)的进栈序列为1，2，3，…\n有多少个不同的出栈序列?\n\n");
				printf("(4)找零问题：有2n个人排成一行进入剧场。入场费5元。\n其中只有n个人有一张5元钞票，另外n人只有10元钞票\n剧院无其它钞票，问有多少种方法使得只要有10元的人买票，售票处就有5元的钞票找零？\n\n\n");
				printf("(5)退出该函数\n\n");
				printf("\033[0m");
			do{
				printf("请输入你想解决的实际问题的序号\n\n");
				scanf("%d",&optionD);
				switch(optionD)
				{
					case 1:
						{
							optionD = BINARY_TREE;
							int point;
						    printf("输入需要多少个节点构成的二叉树\n ");
						    scanf("%d", &point);
						    printf("%d个节点构成的二叉树共有%lu种情形\n\n", point, catalan(n));
							break; 
							
						}
							case 2:
								{	
									optionD = PARENTH_MATCH;
									int bracket;
								    printf("输入括号数\n ");
								    scanf("%d", &bracket);
								    printf("%d个括号数%lu种匹配方式\n\n", bracket, catalan(n));
									break;	
								}
							
							case 3:
								{	
									optionD = STACK_SE;
									int degree;
								    printf("请输入栈的大小：");
								    scanf("%d", &degree);
								    printf("不同的凸出栈序列的数量为：%llu\n\n",catalan(degree) );	
					    			break; 
								}
							
							case 4:
								{	
									optionD = CHANGE_ISSUE;
									int num;
									printf("请输入排成一行进入剧场的人数\n\n");
								    scanf("%d", &num);
								    printf("有%lld种方法使得只要有10元的人买票，售票处就有5元的钞票找零\n\n",catalan(num) );
								    optionD = 0;
								    break; 
								}
						case 5:
				        {
				            printf("已退出卡特兰函数功能。\n");
				            break;
				        }
				            default:
				            printf("无效的选项\n");
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
    printf("**************钩子函数的应用************\n");
    printf("\n");
    printf("\033[0m");
    printf("\033[1;34m");
    printf("****运算计算器***\n");
    printf("\n");
    printf("1.加法\n 2.减法\n 3.乘法\n 4.除法\n 5.退出\n");
    printf("\n");
    printf("\033[1;43m");
    printf("\033[0m");
    int optionE;
    do {
        printf("请输入要执行的效果\n\n");
        int i;
        int type;
        int x, y;
        int (*func)(int x, int y);
        optionE = 0;
        while (optionE != 1 && optionE != 2 && optionE != 3 && optionE != 4 && optionE != 5) {
            printf("请输入选项：");
            scanf("%d", &optionE);
            if (optionE != 1 && optionE != 2 && optionE != 3 && optionE != 4 && optionE != 5) {
                printf("无效的选项，请重新输入。\n");
            }
        }
        if (optionE != 5) {
            printf("请输入两个数字\n");
            scanf("%d %d", &x, &y);
            switch(optionE) {
                case 1:
                    {
                        optionE = OPER_TYPE_ADD;
                        func = add;
                        func = g_handle[optionE].handle;
                        printf("最终结果：%d\n",func(x, y));
                        break;
                    }
                case 2:
                    {
                        optionE = OPER_TYPE_MINUS;
                        func = minus;
                        func = g_handle[optionE].handle;
                        printf("最终结果：%d\n",func(x, y));
                        break;
                    }
                case 3:
                    {
                        optionE = OPER_TYPE_MULTI;
                        func = multi;
                        func = g_handle[optionE].handle;
                        printf("最终结果：%d\n",func(x, y));
                        break;
                    }
                case 4:
                    {
                        optionE = OPER_TYPE_DEV;
                        func = dev;
                        func = g_handle[optionE].handle;
                        printf("最终结果：%d\n",func(x, y));
                        break;
                    }
                    case 5:
				    {
				            printf("已退出钩子函数功能。\n");
				            break;
				    }
                default:
                    printf("无效的选项\n");
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
					printf("***********拆分数函数************\n");
					printf("\n");
					printf("\033[0m");
					printf("\033[1;34m");
					printf("拆分数函数就是把n划分成所有元素不大于n的组合。\n");
					printf("以n=4为例，4=1+1+1+1=2+1+1=2+2=3+1\n");
					printf("无重复元素为:{1,3}\n");
					printf("有重复元素为{1，1，1，1}，{2，1，1}，{2，2}\n\n\n\n");
					printf("\033[0m");
					int n, m, a[100], count = 0;
					printf("输入n\n");
					scanf("%d", &n);
					int *p = &count;
					printf("*********************\n");
					pl(n, 1, a, 0, p);
					printf("无重复元素可以分成以上%d种.\n", count);
					printf("*********************\n");
					count = 0;
					plsame(n, 1, a, 0, p);
					printf("有重复元素可以分成以上%d种.\n", count);
					printf("*********************\n");
					break; 
				}
					 case 10:
			            printf("退出系统\n");
			            break;
			        default:
			            printf("无效的选项\n");
			            break;
			    }
			} 
					while(option != 10);
			
			return 0;
		}
				

			
			   
			
			 
	
			
			
	
	

	



		
	
	



