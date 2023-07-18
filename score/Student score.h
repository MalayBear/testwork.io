#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//�������� �ṹ�� 
struct ExamSchedule {
    char subject[20];
    char date[20];
    char time[10];
} examSchedule[] = {
    {"�����", "6��10��", "8:30"},
    {"Ӣ��", "6��11��", "10:00"},
    {"����", "6��12��", "13:30"},
    {"��ѧ", "6��13��", "9:00"}
};
//���Կ�Ŀ 
struct Student {
    char name[10];
    char id[20];
    float Computer;
    float English;
    float Chinese;
    float Math;
} score[10] = {//ѧ����Ϣ  
    {"����",1, 0, 0, 0, 0},
    {"��ΰ", 2,0, 0, 0, 0},
    {"��С��",3, 0, 0, 0, 0},
    {"�Զ�", 4,0, 0, 0, 0},
    {"����",5, 0, 0, 0, 0},
    {"����", 6,0, 0, 0, 0},
    {"����",7, 0, 0, 0, 0},
    {"�·�", 8,0, 0, 0, 0},
    {"����", 9,0, 0, 0, 0},
    {"л��", 10,0, 0, 0, 0}
};
//���Բ�ѯ 
void queryExam(char* name) 
{
    int found = 0;
    int i, j;
    // �ж�����������ֻ����ַ���,ʹ���û�����������id�����Բ�ѯ 
    if(isdigit(name[0]))
    {
        //�ַ���ת��Ϊ���� 
        int id = atol(name);
        for(i = 0; i < 10; i++)
        {   
            if(*score[i].id == id)
            {
                for(j = 0; j < 4;j++)
                {	//�ж������ַ��� 
                    if(strcmp(examSchedule[j].subject, "�����") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "�����");
                    } else if(strcmp(examSchedule[j].subject, "Ӣ��") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "Ӣ��");
                    } else if(strcmp(examSchedule[j].subject, "����") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "����");
                    } else if(strcmp(examSchedule[j].subject, "��ѧ") == 0) 
                    {
                        printf(" %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "��ѧ");
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
        {   //�Ƚ������ַ����Ƿ���ͬ 
            if(strcmp(score[i].name, name) == 0) 
            {
                for(j = 0; j < 4; j++) 
                {
                    if(strcmp(examSchedule[j].subject, "�����") == 0) 
                    {
                        printf("1 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "�����");
                    } else if(strcmp(examSchedule[j].subject, "Ӣ��") == 0) 
                    {
                        printf("2 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "Ӣ��");
                    } else if(strcmp(examSchedule[j].subject, "����") == 0) 
                    {
                        printf("3 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "����");
                    } else if(strcmp(examSchedule[j].subject, "��ѧ") == 0) 
                    {
                        printf("4 %s %s %s %s\n", score[i].name, examSchedule[j].date, examSchedule[j].time, "��ѧ");
                    }
                }
                found = 1;
                break;
            }
        }
    }
    if(!found)
    {
        printf("û���ҵ���ѧ����Ϣ\n");
    }
}

//�ж���߳ɼ� 
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

//ƽ���ɼ� 
float Average(struct Student* s) 
{
    return (s->Computer + s->English + s->Chinese + s->Math) / 4.0;
}
//�ܷ� 
float Sum(struct Student* s) 
{
    return s->Computer + s->English + s->Chinese + s->Math;
}
