#include <stdio.h>

//ö�� 
enum Option 
{
    STU_INFOR = 1, //ѧ����Ϣ 
    STU_COURSE, //ѧ���γ� 
  	CHOOSE_COURSE, //ѡ��γ� 
	STU_EXAM,//ѧ������ 
	STU_SCORE,//ѧ���ɼ� 
    EXIT,//�˳� 
};

//ѧ����Ϣ 
enum infor
{
	ADD_INFOR = 1,//��� 
	REVISE_INFOR,//�޸� 
	DELETE_INFOR,//ɾ�� 
	CONSULT_INFOR,//��ѯ 
	SHOW_INFOR,	//��ʾ
	EXIT_INFOR,//�˳� 
};


//�γ�
enum co
{
	ADD_co = 1,//��ӿγ� 
	REVISE_co ,//�޸Ŀγ� 
	CONSULT_co,//��ѯ�γ� 
	DELETE_co,//ɾ���γ� 
	EXIT_co,//�˳� 
};
//ѡ��γ�
enum choose
{
	CH_co = 1,//ѡ��γ� 
	Con_co ,//�鿴ѡ�ν�� 
	EXIT_choose,//�˳� 
} ;

//ѧ���ɼ� 
enum STU_S
{
	STU_SUM_AVER = 1,//�ֺܷ�ƽ���� 
	STU_MAX ,//��߷� 
	STU_KEEP,//���� 
	EXIT_S,//�˳� 
 
};

