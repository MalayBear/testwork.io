#include<stdio.h>
void MAX(float sub[],float* max_grade,int* max_grade_id)
{	int i;
	* max_grade = 0;
	* max_grade_id = 0;
	
	for(i = 0;i < 10; i++)
	{
		if(sub[i] > * max_grade)
		{
			* max_grade = sub[i];
			* max_grade_id = i + 1; 
		}
	}
}
void Insert(float sub[],int insertPos,float insertValue)
{
//	int n = sizeof(sub)/sizeof(int);
	int i;
	for(i = 10;i > insertPos;i--)
	{
		sub[i + 1] = sub[i];
	}
	sub[insertPos] = insertValue;
}
int main()
{    //输入10个同学3门课成绩并保存。
	printf("（1）计算每个同学的总分和平均分，保存并输出\n");
	printf("（2）计算每门课程的总分和平均分，保存并输出\n");
	printf("（3）找出并输出每门课程的最高分及其学号\n");
	printf("（4）中间第5行插入一个同学的成绩\n");
	printf("（5）保存并打印每个同学的名字\n");
	printf("（6）退出\n");
	int i;
	//初始化 
	float Chinese[10] = {0},Math[10] = {0},English[10] = {0};
	printf("enter the 10 student Chinese's ,Math's,English's score\n");
	for( i = 0;i < 10;i++)
	{
		scanf("%f %f %f",&Chinese[i],&Math[i],&English[i]);	
	}
	while(1)
  {
	int choice;
	printf("please input you choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
			float sum [10];
			float average [10];
			for(i = 0;i < 10;i++)
			{
				sum[i] = Chinese[i] + Math[i] + English[i];
				average[i] = (Chinese[i] + Math[i] + English[i])/3;	
				printf("%2d   sum = %.2f   average = %.2f\n",i+1,sum[i],average[i]);	
			}
			}
			break;
		case 2 :
			{
			float total_Chinese = 0,total_Math = 0,total_English = 0;
//			float average1[10],average2[10],average3[10];
			float average_Chinese,average_Math ,average_English ;
			for(i = 0;i < 10;i++)
			{
				total_Chinese += Chinese[i];
				total_Math += Math[i];
				total_English += English[i];	
			}
				average_Chinese = total_Chinese / 10;
				printf("Chinese average =  %.2f, total = %.2f\n ",average_Chinese,total_Chinese);
				average_Math = total_Math/ 10;
				printf("Math average =  %.2f, total = %.2f\n ",average_Math,total_Math);
				average_English = total_English / 10;
				printf("English average =  %.2f, total = %.2f\n ",average_English,total_English);
			}	
				break;
		case 3 :
			{
			int max_Chinese_id,max_Math_id,max_English_id;
			float max_Chinese,max_Math,max_English;
			MAX(Chinese,&max_Chinese,&max_Chinese_id);
			printf("the hightest score in Chinese is %f , the student ID is %d\n",max_Chinese,max_Chinese_id);
			MAX(Math,&max_Math,&max_Math_id);
			printf("the hightest score in Math is %f , the student ID is %d\n",max_Math,max_Math_id);
			MAX(English,&max_English,&max_English_id);
			printf("the hightest score in English is %f , the student ID is %d\n",max_English,max_English_id);
		    }
			break;
		case 4:
			{
			float C,M,E;
			printf("please enter the insert value in Chinese and math and English \n");
			scanf("%f %f %f",&C,&M,&E);
			Insert(Chinese,4,C);
			Insert(Math,4,M);
			Insert(English,4,E);
			for(i = 0; i < 10 ;i++)
			{	
		    	printf("Chinese score is:%f \n Math score is:%f\n English score is %f\n",Chinese[i],Math[i],English[i]);	
		    }
		    }
			break;
		case 5:
			printf("\n同学   数学   语文   英语\n");
		for(int i = 0;i < 10;i++)
		{
		printf("%2d   %.2f   %.2f   %.2f\n",i+1,Chinese[i],Math[i],English[i]);
		}
		break;
		case 6:
			return 0;
		default:
			printf("please input once again\n");
			break;
		
	}
	}
			
	
return 0;
}

