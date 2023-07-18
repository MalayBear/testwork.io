#include <stdio.h>
#define MAXLINE 10
enum Option {READ, STATS, ABOVE_AVG, QUERY, MODIFY, QUIT};
int operate[10] = {55, 50, 60, 65, 70, 75, 80, 85, 90, 95};
int Average(int a)
{	int sum=0;
	int number=0;
	for (int j = 0; j < 10; j++) 
	{	
        sum += operate[j];
    }
    number = sum / a;
    return number;
}
int main() {
    printf("(1)统计并输出平均分和最高分、最低分\n");
    printf("(2)找出在这10个成绩中超过平均值的那些数字并打印出来。\n");
    printf("(3)查询某个同学的成绩\n");
    printf("(4)修改某个同学的成绩\n");
    printf("(5)退出\n");
    int sum = 0;	
	int max = operate[0];
	int min = operate[0];
    int average=0;

    for (int i = 0; i < 10; i++) 
	{
        int choice;
        printf("please choose the number\n");
        scanf("%d", &choice);

    switch (choice) 
	{
        case STATS:
        	average = 0;
        	sum = 0;
        	average=Average(10);
            for (int j = 0; j < 10; j++) 
			{
                if (operate[j] > max)
				{
                	max = operate[j];
                }

                if (operate[j] < min)
				{
                    min = operate[j];
                }
            }
                printf("average is %d\n", average);
                printf("max is %d\n", max);
                printf("min is %d\n", min);
                break;

            case ABOVE_AVG:
                printf("numbers exceeding the average value are: ");
                //重新定义average，sum的值发生了变化 
                sum = 0;
                average=0;
				average=Average(10);
    			for (int j = 0; j < 10; j++)
    			{
                    if (operate[j] > average) 
					{
                        printf("%d ", operate[j]);
                    }
                }
                
                
                printf("\n");
                break;

            case QUERY:
                int x;
                printf("please enter the student number: ");
                scanf("%d", &x);

                if (x >= 0 && x < 10) {
                    printf("the student score is %d\n", operate[x]);
                } else {
                    printf("Not founding\n");
                }
                break;

            case MODIFY:
                int y;
                printf("please enter the student number to modify: ");
                scanf("%d", &y);

                if (y >= 0 && y < 10) 
				{
                    printf("please enter the modify score: \n");
                    int score;
                    scanf("%d", &score);
                    operate[y] = score;
                    printf("the student score is %d\n", operate[y]);
                } 
				else
				 {
                    printf("invalid student number\n");
                }
                break;

            case QUIT:
                return 0;

            default:
                printf("invalid choice\n");
                break;
        }
    }

    return 0;
}

