#include<stdio.h>
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

int main()
{	printf("**************卡特兰数(Catalan number)************\n");
	printf("卡特兰数是组合数学中一个常出现于各种计数问题中的数列\n");
	printf("catalan数满足递推式 [3] ：h(n)= h(0)*h(n-1)+h(1)*h(n-2) + ... + h(n-1)*h(0) (n≥2)\n\n\n\n");
	 int i;
    int n;
    printf("请输入一个10以内的随机数\n");
    scanf("%d",&n);
    // 输出前 10 个数
    printf("以下是卡特兰数列：\n");
    for (i = 1; i <= n; i++) {
        printf("%lld ", catalan(i));
    }
    
    printf("\n\n\n\n");
    printf("##########用卡特兰数解决应用问题##############\n\n");
    printf("(1)n结点二叉树问题:n个节点构成的二叉树，共有多少种情形?\n\n");
    printf("(2)括号匹配问题:n对括号有多少种匹配方式?\n\n");
	printf("(3)凸出栈序列：一个栈(无穷大)的进栈序列为1，2，3，…\n有多少个不同的出栈序列?\n\n");
	printf("(4)找零问题：有2n个人排成一行进入剧场。入场费5元。\n其中只有n个人有一张5元钞票，另外n人只有10元钞票\n剧院无其它钞票，问有多少种方法使得只要有10元的人买票，售票处就有5元的钞票找零？\n\n\n");
	while(1)
{
	int choice;
	printf("请输入你想解决的实际问题的序号\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				int point;
			    printf("输入需要多少个节点构成的二叉树\n ");
			    scanf("%d", &point);
			    printf("%d个节点构成的二叉树共有%lu种情形\n\n", point, catalan(n));
				break; 
			}
		case 2:
			{
				int bracket;
			    printf("输入括号数\n ");
			    scanf("%d", &bracket);
			    printf("%d个括号数%lu种匹配方式\n\n", bracket, catalan(n));
				break;	
			}
		
		case 3:
			{
				int degree;
			    printf("请输入栈的大小：");
			    scanf("%d", &degree);
			    printf("不同的凸出栈序列的数量为：%llu\n\n",catalan(degree) );	
    			break; 
			}
		
		case 4:
			{
				int num;
				printf("请输入排成一行进入剧场的人数\n\n");
			    scanf("%d", &num);
			    printf("有%lld种方法使得只要有10元的人买票，售票处就有5元的钞票找零\n\n",catalan(num) );
			    break; 
			}
			default :
				break;
			
				
	}
}
}

