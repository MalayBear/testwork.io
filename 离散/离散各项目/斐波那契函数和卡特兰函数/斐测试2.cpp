#include <stdio.h>
//构造斐波那契函数 
// index 表示求数列中第 index 个位置上的数的值
int fib(int index) {
    // 设置结束递归的限制条件
    if (index == 1 || index == 2) {
        return 1;
    }
    return fib(index - 1) + fib(index - 2);
}

int main()
{	
	printf("***********斐波那契数列（Fibonacci sequence）***************\n");
	printf("斐波那契数列（Fibonacci sequence），又称黄金分割数列\n，因意大利数学家莱昂纳多·斐波那契（Leonardo Fibonacci）1202年以兔子繁殖为例子而引入\n，故又称为“兔子数列”，指的是这样一个数列：\n\n\n\n");
    int i;
    int n;
    printf("请输入一个随机数\n");
    scanf("%d",&n);
    // 输出前 10 个数
    printf("以下是斐波那契数列：\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    
    printf("\n\n\n\n");
    printf("##########用斐波那契数列解决应用问题##############\n");
	printf("(1)兔子繁殖问题：一对兔子每个月能生出一对小兔子\n一年以后可以繁殖多少对兔子？\n\n\n");
	printf("(2)矩形覆盖问题,用小矩形无折叠覆盖大矩形有多少种方法?\n\n\n");
	printf("(3)青蛙跳台阶问题：一个台阶总共有n级，一个青蛙一次可以跳1级，也可以跳2级。\n求青蛙跳上n级台阶总共有多少总跳法\n\n");
	while(1)
{
	int choice;
	printf("请输入你想解决的实际问题的序号\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
			    int month;
			    int young = 1;
			    int adult = 0;
			    int total = 0;
			    printf("请输入兔子要经过的月份数：\n");
			    scanf("%d",&month);
			    printf("经过月数\t幼崽对数\t成兔对数\t总兔对数\n");
			    for(int i = 0;i < month;i++) 
				{ 
			        if(i > 0 && i % 3 == 0)
					{
						//每3个月幼兔到成兔
			            adult += young;
			            young = 0;
			        }
			        total = young+adult;
			        printf("%d\t\t%d\t\t%d\t\t%d\n",i + 1,young,adult,total);
			        young = total;
	            }
	            	break;
   
			}
		case 2:
			{
				int count;
				printf("请输入矩形长度\n");
				scanf("%d",&count);
				int total = fib(count);
				printf("2 x %d 的矩形可以用 %d 种方法进行覆盖\n\n", count, total);
				break;	
			}
	
	    case 3:
	    	{
	    		int step;
			    printf("请输入青蛙需要跳的台阶数台阶数：\n");
			    scanf("%d", &n);
			    int result = fib(n);
			    printf("一共有%d种跳法\n", result);
			    break;
			}
			default:
				break;
		}
	}
    return 0;
}

