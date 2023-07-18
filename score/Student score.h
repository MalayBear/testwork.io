#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//考试内容 结构体 
struct ExamSchedule {
    char subject[20];
    char date[20];
    char time[10];
} examSchedule[] = {
    {"计算机", "6月10日", "8:30"},
    {"英语", "6月11日", "10:00"},
    {"语文", "6月12日", "13:30"},
    {"数学", "6月13日", "9:00"}
};
//考试科目 
struct Student {
    char name[10];
    char id[20];
    float Computer;
    float English;
    float Chinese;
    float Math;
} score[10] = {//学生信息  
    {"李明",1, 0, 0, 0, 0},
    {"张伟", 2,0, 0, 0, 0},
    {"王小红",3, 0, 0, 0, 0},
    {"赵东", 4,0, 0, 0, 0},
    {"刘军",5, 0, 0, 0, 0},
    {"周莉", 6,0, 0, 0, 0},
    {"吴力",7, 0, 0, 0, 0},
    {"陈峰", 8,0, 0, 0, 0},
    {"林秋", 9,0, 0, 0, 0},
    {"谢燕", 10,0, 0, 0, 0}
};
//考试查询 
void queryExam(char* name) 
{
    int found = 0;
    int i, j;
    // 判断输入的是数字还是字符串,使得用户输入姓名和id都可以查询 
    if(isdigit(name[0]))
    {
        //字符串转换为数字 
        int id = atol(name);
        for(i = 0; i < 10; i++)
        {   
            if(*score[i].id == id)
            {
                for(j = 0; j < 4;j++)
                {	//判断两个字符串 
                    if(strcmp(examSchedule[j].subject, "计算机") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "计算机");
                    } else if(strcmp(examSchedule[j].subject, "英语") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "英语");
                    } else if(strcmp(examSchedule[j].subject, "语文") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "语文");
                    } else if(strcmp(examSchedule[j].subject, "数学") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "数学");
                    }
                }
                found = 1;
                break;
            }   
        }
    }
    else
    {
        for(i = 0; i < 10; i++) 
        {   //比较两个字符串是否相同 
            if(strcmp(score[i].name, name) == 0) 
            {
                for(j = 0; j < 4; j++) 
                {
                    if(strcmp(examSchedule[j].subject, "计算机") == 0) 
                    {
                        printf("1 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "计算机");
                    } else if(strcmp(examSchedule[j].subject, "英语") == 0) 
                    {
                        printf("2 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "英语");
                    } else if(strcmp(examSchedule[j].subject, "语文") == 0) 
                    {
                        printf("3 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "语文");
                    } else if(strcmp(examSchedule[j].subject, "数学") == 0) 
                    {
                        printf("4 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "数学");
                    }
                }
                found = 1;
                break;
            }
        }
    }
    if(!found)
    {
        printf("没有找到该学生信息\n");
    }
}

//判断最高成绩 
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

//平均成绩 
float Average(struct Student* s) 
{
    return (s->Computer + s->English + s->Chinese + s->Math) / 4.0;
}
//总分 
float Sum(struct Student* s) 
{
    return s->Computer + s->English + s->Chinese + s->Math;
}
