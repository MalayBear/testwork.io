#include<stdio.h>
#include<string.h>
#include<stdlib.h>//atoi�����ַ���ת��������,strcmp���Ƚ������ַ���
#include <ctype.h>//isdigit
#include "Student score.h"
int main() 
{	 //����һ������Ϊ 20 ���ַ����飬���ڴ洢ѧ��������
	char name[20];
	float Chinese[10], English[10], Math[10], Computer[10];	
    int i, j;
	int option = 0;
	printf("#########��ѯ���Կ�Ŀ����ʱ��############\n\n");
	while(option != 1)
	{
	    printf("����ѧ��������ѯ���ԣ�����0�˳���ѯ���ԣ�\n");
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
	//¼��ɼ����ж��Ƿ���Ч 
	printf("\n\n");
	int Valid = 0;
		printf("ѧ����������ѧ�����£�\n");
		for(i = 0; i < 10; i++) 
		{	
		    printf("%d��: %s\n", i + 1, score[i].name);
		    printf("������%sͬѧ�ļ�����ɼ���\n", score[i].name);
		    scanf("%f", &score[i].Computer);
		    while(score[i].Computer < 0 || score[i].Computer > 100) 
		    {
		        printf("�óɼ���Ч������������%sͬѧ�ļ�����ɼ�\n", score[i].name);
		        scanf("%f", &score[i].Computer);
		    }
		    printf("������%sͬѧ��Ӣ��ɼ���\n", score[i].name);
		    scanf("%f", &score[i].English);
		    while(score[i].English < 0 || score[i].English > 100)
		    {
		        printf("�óɼ���Ч������������%sͬѧ��Ӣ��ɼ�\n", score[i].name);
		        scanf("%f", &score[i].English);
		    }
		    printf("������%sͬѧ�����ĳɼ���\n", score[i].name);
		    scanf("%f", &score[i].Chinese);
		    while(score[i].Chinese < 0 || score[i].Chinese > 100) 
		    {
		        printf("�óɼ���Ч������������%sͬѧ�����ĳɼ�\n", score[i].name);
		        scanf("%f", &score[i].Chinese);
		    }
		    printf("������%sͬѧ����ѧ�ɼ���\n", score[i].name);
		    scanf("%f", &score[i].Math);
		    while(score[i].Math < 0 || score[i].Math > 100) 
		    {
		        printf("�óɼ���Ч������������%sͬѧ�ļ�����ɼ�\n", score[i].name);
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
	printf("##############��ѯ�ɼ�##############\n");
    printf("��1����ѯͬѧ���ֺܷ�ƽ���֣����沢���\n");
    printf("��2���ҳ������ÿ�ſγ̵���߷ּ���ѧ��\n");
    printf("��3�����沢��ӡÿ��ͬѧ������\n");
    printf("��4���˳�\n");
    printf("*********************************************\n");
		while(1)
  {
	int choice;
	printf("���������ѡ��\n");
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
	    		printf("������߷֣�ѧ�� %d, %.2f ��\n", max_Chinese_id, max_Chinese_grade);
	    		MAX(English, &max_English_grade, &max_English_id);
	    		printf("Ӣ����߷֣�ѧ�� %d, %.2f ��\n", max_English_id, max_English_grade);
	    		MAX(Math, &max_Math_grade, &max_Math_id);
	    		printf("��ѧ��߷֣�ѧ�� %d, %.2f ��\n", max_Math_id, max_Math_grade);
	    		MAX(Computer, &max_Computer_grade, &max_Computer_id);
	    		printf("�������߷֣�ѧ�� %d, %.2f ��\n", max_Computer_id, max_Computer_grade);
	    		break; 
			}	
				
			

		case 3:
			printf("\nͬѧ   ��ѧ   ����   Ӣ��\n");
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





