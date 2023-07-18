#include<stdio.h>
#include<string.h>
#include<stdlib.h>//atoi：将字符串转换成整数,strcmp：比较两个字符串
#include <ctype.h>//isdigit
#include "Student score.h"
int main() 
{	 //定义一个长度为 20 的字符数组，用于存储学生的姓名
	char name[20];
	float Chinese[10], English[10], Math[10], Computer[10];	
    int i, j;
	int option = 0;
	printf("#########查询考试科目及其时间############\n\n");
	while(option != 1)
	{
	    printf("输入学生姓名查询考试，输入0退出查询考试：\n");
	    char examName[10];
	    scanf("%s", examName);
	    if(strcmp(examName, "0") == 0)
	    {
	        option = 1;
	    }
	    else
	    {
	        queryExam(examName);
	    }
}	
	//录入成绩并判断是否有效 
	printf("\n\n");
	int Valid = 0;
		printf("学生的名单及学号如下：\n");
		for(i = 0; i < 10; i++) 
		{	
		    printf("%d号: %s\n", i + 1, score[i].name);
		    printf("请输入%s同学的计算机成绩：\n", score[i].name);
		    scanf("%f", &score[i].Computer);
		    while(score[i].Computer < 0 || score[i].Computer > 100) 
		    {
		        printf("该成绩无效！请重新输入%s同学的计算机成绩\n", score[i].name);
		        scanf("%f", &score[i].Computer);
		    }
		    printf("请输入%s同学的英语成绩：\n", score[i].name);
		    scanf("%f", &score[i].English);
		    while(score[i].English < 0 || score[i].English > 100)
		    {
		        printf("该成绩无效！请重新输入%s同学的英语成绩\n", score[i].name);
		        scanf("%f", &score[i].English);
		    }
		    printf("请输入%s同学的语文成绩：\n", score[i].name);
		    scanf("%f", &score[i].Chinese);
		    while(score[i].Chinese < 0 || score[i].Chinese > 100) 
		    {
		        printf("该成绩无效！请重新输入%s同学的语文成绩\n", score[i].name);
		        scanf("%f", &score[i].Chinese);
		    }
		    printf("请输入%s同学的数学成绩：\n", score[i].name);
		    scanf("%f", &score[i].Math);
		    while(score[i].Math < 0 || score[i].Math > 100) 
		    {
		        printf("该成绩无效！请重新输入%s同学的计算机成绩\n", score[i].name);
		        scanf("%f", &score[i].Math);
		    }	
		    	Chinese[i] = score[i].Chinese;
        		English[i] = score[i].English;
        		Math[i] = score[i].Math;
        		Computer[i] = score[i].Computer;
        		
		     if(strcmp(name, score[i].name) == 0)
			    {
			        Valid = 1;
			        break;	
			    }
			}
	
	printf("\n\n");	 
	printf("##############查询成绩##############\n");
    printf("（1）查询同学的总分和平均分，保存并输出\n");
    printf("（2）找出并输出每门课程的最高分及其学号\n");
    printf("（3）保存并打印每个同学的名字\n");
    printf("（4）退出\n");
    printf("*********************************************\n");
		while(1)
  {
	int choice;
	printf("请输入你的选择\n");
	scanf("%d",&choice);
switch(choice)
{
		case 1:
	    {
	        float sum[10];
	        float average[10];
	        for (i = 0; i < 10; i++)
        	{
            sum[i] = Sum(&score[i]);
            average[i] = Average(&score[i]);
            printf("%d. %s: sum = %.2f, average = %.2f\n", i + 1, score[i].name, sum[i], average[i]);
        	}
        break;
    }
    

			break;	
				
	case 2 :
			{
			 	int max_Chinese_id, max_English_id, max_Math_id, max_Computer_id;
    			float max_Chinese_grade, max_English_grade, max_Math_grade, max_Computer_grade;
    			int i;
				 MAX(Chinese, &max_Chinese_grade, &max_Chinese_id);
	    		printf("语文最高分：学生 %d, %.2f 分\n", max_Chinese_id, max_Chinese_grade);
	    		MAX(English, &max_English_grade, &max_English_id);
	    		printf("英语最高分：学生 %d, %.2f 分\n", max_English_id, max_English_grade);
	    		MAX(Math, &max_Math_grade, &max_Math_id);
	    		printf("数学最高分：学生 %d, %.2f 分\n", max_Math_id, max_Math_grade);
	    		MAX(Computer, &max_Computer_grade, &max_Computer_id);
	    		printf("计算机最高分：学生 %d, %.2f 分\n", max_Computer_id, max_Computer_grade);
	    		break; 
			}	
				
			

		case 3:
			printf("\n同学   数学   语文   英语\n");
			for(int i = 0;i < 10;i++)
			{
			printf("%2d:%s  %.2f   %.2f   %.2f  %.2f\n",i+1,score[i].name,score[i].Computer,score[i].English,score[i].Chinese,score[i].Math);
			}
		break;
		case 4:
			return 0;
		default:
			printf("please input once again\n");
			break;
		
	}
	} 
	return 0;
}





