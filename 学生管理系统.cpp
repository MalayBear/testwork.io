#include <stdio.h>
#include<string.h>
#include<stdlib.h>//atoi�����ַ���ת��������,strcmp���Ƚ������ַ���
#include <ctype.h>//isdigit�ж������ַ� 
#include "option.h"//����ö����ѡ���� 
#include "score\Student score.h"//�ɼ�
#define MAX_NAME_LEN 20 		// ������󳤶�
#define MAX_COURSE_LEN 20
typedef struct {
    char name[20];        // ����
    char id[20];          // ѧ��
    char gender[10];      // �Ա�
    int year;             // ��ѧ���
    char contact[20];     // ��ϵ��ʽ
} Stu;
// �û���Ϣ�ṹ�壬�����û���������
struct user_info {
    char username[20];
    char password[20];
};

// �����û���Ϣ��������ʼ�û�admin
struct user_info users[10] = {
    {"admin", "123456"}
};

// ��ǰ�û�����ʼΪδ��¼
int current_user = -1;

// ע�ắ��
void register_user() {
    char username[20];
    char password[20];
    char password2[20];
    printf("\nע�����û�\n");
    printf("�������û�����������20���ַ�����\n");
    scanf("%s", username);
    // ����û����Ƿ��Ѿ�����
    for (int i = 0; i < 10; i++) {
        if (strcmp(users[i].username, username) == 0) {
            printf("���û����Ѿ����ڣ����������룡\n");
            return;
        }
    }
    printf("���������루������20���ַ�����\n");
    scanf("%s", password);
    // ��ȡ�ڶ������������
    printf("���ٴ��������룺\n");
    scanf("%s", password2);
    // �����������������Ƿ���ͬ
    if (strcmp(password, password2) != 0) {
        printf("������������벻һ�£�������ע�ᣡ\n");
        return;
    }
    // ��users������������û�
    for (int i = 0; i < 10; i++) {
        if (users[i].username[0] == '\0') {
            strcpy(users[i].username, username);
            strcpy(users[i].password, password);
            printf("ע��ɹ���\n");
            return;
        }
    }
    printf("�û�����������ע��ʧ�ܣ�\n");
}

// ��¼����
void login() {
    char username[20];
    char password[20];
    printf("\n��¼\n");
    printf("�������û�����\n");
    scanf("%s", username);
    printf("���������룺\n");
    scanf("%s", password);
    // ����û����������Ƿ���ȷ
    for (int i = 0; i < 10; i++) {
        if (strcmp(users[i].username, username) == 0
                && strcmp(users[i].password, password) == 0) {
            printf("��¼�ɹ���\n");
            current_user = i;
            return;
        }
    }
    printf("�û�����������󣬵�¼ʧ�ܣ�\n");
}

// �޸����뺯��
void change_password() {
    char password1[20];
    char password2[20];
    printf("\n�޸�����\n");
    printf("����������룺\n");
    char old_password[20];
    scanf("%s", old_password);
    if (strcmp(users[current_user].password, old_password) != 0) {
        printf("����������޸�����ʧ�ܣ�\n");
        return;
    }
    printf("�����������룺\n");
    scanf("%s", password1);
    printf("��ȷ�������룺\n");
    scanf("%s", password2);
    if (strcmp(password1, password2) != 0) {
        printf("�����������벻һ�£��޸�����ʧ�ܣ�\n");
        return;
    }
    strcpy(users[current_user].password, password1);
    printf("�޸�����ɹ���\n");
}

// �˳���¼����
void logout() {
    printf("\n�˳���¼\n");
    current_user = -1;
}


// ѧ��ѡ�������ʼ��
	int selected_courses[10][4];
		// ����ѧ�������Ϳγ�����
	char *student_name[] = {"����", "��ΰ", "��С��", "�Զ�", "����", "����", "����", "�·�", "����", "л��"};
	char *course_name[] = {"College Physics", "Physical Education", "Military Theory", "Political Economics"};
// ��¼ѧ��ѡ��Ŀγ�
void select_course(int sid, int cid) {
	if (selected_courses[sid][cid]) {
		printf("�ÿγ��ѱ�ѡ�������ظ�ѡ��\n");
	} else {
		selected_courses[sid][cid] = 1;
		printf("ѡ�γɹ���\n");
	}
}

// ���ѧ��������ѡ�ν��
void print_selected_courses(int sid) {
	printf("\n%s��ѡ�ν�����£�\n", student_name[sid]);
	for (int i = 0; i < 4; i++) {
		if (selected_courses[sid][i]) {
			printf("- %s\n", course_name[i]);
		}
	}
}

// ѧ����Ϣ�ṹ��
typedef struct {
	char name[MAX_NAME_LEN]; // ѧ������
	int id; 				// ѧ��ѧ��
} Studentss;

// ���޿ογ���Ϣ�ṹ��
typedef struct {
	char name[MAX_COURSE_LEN];   // �γ�����
	char time[20]; 			   	// �Ͽ�ʱ��
} Course;

// ���޿�ѡ����Ϣ�ṹ��
typedef struct {
	int sid; 					// ѧ��ѧ��
	char cname[MAX_COURSE_LEN]; // �γ�����
} Enrollment;

// ����ȫ�ֱ������洢ѧ���Ϳγ���Ϣ
Studentss students[] = {
	{"����", 1},
	{"��ΰ", 2},
	{"��С��", 3},
	{"�Զ�", 4},
	{"����", 5},
	{"����", 6},
	{"����", 7},
	{"�·�", 8},
	{"����", 9},
	{"л��", 10},
};
//����ṹ���ֹ��� 
struct Courses {
    char* name;
    char* time;
};
Courses courses[] = {
	{"Computer", "����һ��������  9:00"},
	{"English", "���ڶ���������   8:00"},
	{"Chinese", "���ڶ���������   9:30"},
	{"Math",    "����һ��������   15:00"},
};
const int CourseNum = sizeof(courses) / sizeof(Courses);
const int StudentNum = sizeof(students) / sizeof(Studentss);

Enrollment *enrollments = NULL; 	// ѡ����Ϣ����
int enrollment_num = 0; // ��ǰѡ������

// ����ѧ�Ų���ѧ��������ѧ����ָ�룬����Ҳ����򷵻�NULL
Studentss*find_student(int id) {
	for (int i = 0; i < StudentNum; i++) {
		if (students[i].id == id) {
			return &students[i];
		}
	}
	return NULL;
}

// ���ݿγ����Ʋ��ҿγ̣����ؿγ̵�ָ�룬����Ҳ����򷵻�NULL
Courses *find_course(char *name) {
	for (int i = 0; i < CourseNum; i++) {
		if (strcmp(courses[i].name, name) == 0) {
			return &courses[i];
		}
	}
	return NULL;
}

// ���ѡ�μ�¼
void add_enrollment() {
	int sid;
	char cname[MAX_COURSE_LEN];
	printf("������ѧ��ѧ��:");
	scanf("%d", &sid);
	if (find_student(sid) == NULL) {
		printf("�Ҳ�����ѧ��");
		return;
	}
	printf("������γ�����(����ĸ��д):");
	scanf("%s", cname);
	if (find_course(cname) == NULL) {
		printf("�Ҳ����ÿγ�");
		return;
	}
	Enrollment *e = (Enrollment *)malloc(sizeof(Enrollment));
	e->sid = sid;
	strcpy(e->cname, cname);
	enrollments = (Enrollment *)realloc(enrollments, sizeof(Enrollment) * (enrollment_num + 1));
	enrollments[enrollment_num++] = *e;
	printf("��ӳɹ�\n");
}

// �޸�ѡ�μ�¼
void modify_enrollment() {
	int sid;
	char cname[MAX_COURSE_LEN];
	printf("������ѧ��ѧ��:");
	scanf("%d", &sid);
	if (find_student(sid) == NULL) {
		printf("�Ҳ�����ѧ��");
		return;
	}
	printf("������ԭ�γ�����(����ĸ��д):");
	scanf("%s", cname);
	int found = 0;
	for (int i = 0; i < enrollment_num; i++) {
		if (enrollments[i].sid == sid && strcmp(enrollments[i].cname, cname) == 0) {
			found = 1;
			printf("�������µĿγ�����(����ĸ��д):");
			scanf("%s", cname);
			if (find_course(cname) == NULL) {
				printf("�Ҳ����ÿγ�");
				return;
			}
			strcpy(enrollments[i].cname, cname);
			printf("�޸ĳɹ�\n");
			break;
		}
	}
	if (!found) {
		printf("�Ҳ�����ѡ�μ�¼\n");
	}
}

// ɾ��ѡ�μ�¼
void delete_enrollment() {
	int sid;
	char cname[MAX_COURSE_LEN];
	printf("������ѧ��ѧ��:");
	scanf("%d", &sid);
	if (find_student(sid) == NULL) {
		printf("�Ҳ�����ѧ��");
		return;
	}
	printf("������γ�����(����ĸ��д):");
	scanf("%s", cname);
	int found = 0;
	for (int i = 0; i < enrollment_num; i++) {
		if (enrollments[i].sid == sid && strcmp(enrollments[i].cname, cname) == 0) {
			found = 1;
			for (int j = i; j < enrollment_num - 1; j++) {
				enrollments[j] = enrollments[j + 1];
			}
			enrollments = (Enrollment *)realloc(enrollments, sizeof(Enrollment) * (enrollment_num - 1));
			enrollment_num--;
			printf("ɾ���ɹ�\n");
			break;
		}
	}
	if (!found) {
		printf("�Ҳ�����ѡ�μ�¼\n");
	}
}

// ��ʾѡ����Ϣ
void show_enrollment() {
	printf("ѧ��\t����\t�γ�����\t�Ͽ�ʱ��\n");
	for (int i = 0; i < enrollment_num; i++) {
		int sid = enrollments[i].sid;
		Studentss *s = find_student(sid);
		Courses *c = find_course(enrollments[i].cname);
		if (s != NULL && c != NULL) {
			printf("%d\t%s\t%s\t%s\n", sid, s->name, c->name, c->time);
		}
	}
}


int main()
{	

		int ch;
		Stu s[50];         // ���ά��50��ѧ����Ϣ
		int count = 0;         // ѧ������
		users[0] = (struct user_info){"admin", "123456"}; 
		do {
		    // ��ʾ�˵�
		    printf("\n--------------\n");
		    if (current_user == -1) {
		        printf("1. ע��\n");
		        printf("2. ��¼\n");
		    }
		    else {
		        printf("3. �޸�����\n");
		        printf("0. ����ϵͳ\n");
		        printf("4. �˳���¼\n");
		    }
		    printf("�����������ţ�\n");
		    
		    scanf("%d", &ch);
		
		    // ִ��ѡ��Ĳ���
		    switch (ch) {
		    case 0:
		        break;
		    case 1:
		        register_user();
		        break;
		    case 2:
		        login();
		        break;
		    case 3:
		        if (current_user == -1) {
		            printf("���ȵ�¼��\n");
		        }
		        else {
		            change_password();
		        }
		        break;
		    case 4:
		        if (current_user == -1) {
		            printf("���ȵ�¼��\n");
		        }
		        else {
		            logout();
		        }
		        break;
		    default:
		        printf("��Ч�Ĳ�����ţ�\n");
		        break;
		    }
		} while (ch != 0);

	
	printf("\033[1;32m");
	printf("����������������������Ŀ¼:ѧ������ϵͳ������������������������������\n\n\n");
	printf("\033[0m");
	printf("\033[1;33m");
	printf(" 1.ѧ����Ϣ����������������\n\n");
	printf(" 2.ѧ���γ̡�������������������\n\n");
	printf(" 3.ѧ��ѡ�Ρ�������������������\n\n");
	printf(" 4.ѧ�����ԡ�������������\n\n");
	printf(" 5.ѧ���ɼ���������������������\n\n");
	printf(" 6.�˳�����ϵͳ\n\n\n");
	printf("\033[0m");
	int option;
	do
 {	
	printf("\n");
	printf("��������Ҫ��ѯ������\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{	
				int optionA ;
				option = STU_INFOR;
				printf("\033[1;36m");
				printf("\n\n");
				printf("********* ѧ����Ϣ ********\n\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
		        printf("1. ���ѧ����Ϣ\n\n");
		        printf("2. �޸�ѧ����Ϣ\n\n");
		        printf("3. ɾ��ѧ����Ϣ\n\n");
		        printf("4. ��ѯѧ����Ϣ\n\n");
		        printf("5. ��ʾ����ѧ����Ϣ\n\n");
		        printf("6. �˳��ò�ѯ\n\n");
		    do{
				    printf("---��ѡ��Ҫ���еĲ���---��\n\n");
				    printf("\n");
				    printf("\033[0m");
					scanf("%d",&optionA);
				switch(optionA)
				{
				
				
					case 1:
					{	
						optionA = ADD_INFOR;
						printf("������ѧ��������");
		                scanf("%s", s[count].name);
		                printf("������ѧ��ѧ�ţ�");
		                scanf("%s", s[count].id);
		                printf("������ѧ���Ա�");
		                scanf("%s", s[count].gender);
		                printf("������ѧ����ѧ��ݣ�");
		                scanf("%d", &s[count].year);
		                printf("������ѧ����ϵ��ʽ��");
		                scanf("%s", s[count].contact);
		                count++;
		                printf("��ӳɹ���\n");
                break;
				}
					case 2:
					{	
						optionA = REVISE_INFOR;
						printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�");
		                char id[20];
		                scanf("%s", id);
	                for (int i = 0; i < count; i++) {
	                    if (strcmp(s[i].id, id) == 0) {
	                        printf("������ѧ��������");
	                        scanf("%s", s[i].name);
	                        printf("������ѧ���Ա�");
	                        scanf("%s", s[i].gender);
	                        printf("������ѧ����ѧ��ݣ�");
	                        scanf("%d", &s[i].year);
	                        printf("������ѧ����ϵ��ʽ��");
	                        scanf("%s", s[i].contact);
	                        printf("�޸ĳɹ���\n");
	                        break;
                    }
                }
                break;
					}
				 case 3:
			        {	
						optionA = DELETE_INFOR;
			            printf("������Ҫɾ����ѧ��ѧ�ţ�");
		                char id2[20];
		                scanf("%s", id2);
                	for (int i = 0; i < count; i++) {
                    	if (strcmp(s[i].id, id2) == 0) {
                        // ����ѧ���������Ϣ��ǰ�ƶ�һ��λ��
                        	for (int j = i; j < count - 1; j++) {
                            s[j] = s[j+1];
                        	}
                        count--;
                        printf("ɾ���ɹ���\n");
                        break;
                    }
                }
                	break;
			        }
			    case 4:
			    	{
			    		optionA = CONSULT_INFOR;
			    		printf("������Ҫ��ѯ��ѧ��ѧ�ţ�");
		                char id3[20];
		                scanf("%s", id3);
                	for (int i = 0; i < count; i++) {
	                    if (strcmp(s[i].id, id3) == 0) {
	                        printf("������%s\n", s[i].name);
	                        printf("ѧ�ţ�%s\n", s[i].id);
	                        printf("�Ա�%s\n", s[i].gender);
	                        printf("��ѧ��ݣ�%d\n", s[i].year);
	                        printf("��ϵ��ʽ��%s\n", s[i].contact);
	                        break;
	                    }
			    		
					}
				}
				case 5:
					{
						optionA = SHOW_INFOR;
						printf("ѧ����Ϣ���£�\n");
                	for (int i = 0; i < count; i++) {
	                    printf("������%s\n", s[i].name);
	                    printf("ѧ�ţ�%s\n", s[i].id);
	                    printf("�Ա�%s\n", s[i].gender);
	                    printf("��ѧ��ݣ�%d\n", s[i].year);
	                    printf("��ϵ��ʽ��%s\n", s[i].contact);
	                    printf("\n");
                	}
                		optionA = 0;
                break;
					}
				case 6:
					{
							// �˳�ϵͳ
		                printf("ллʹ�ã�\n");
		                break;
					}
			        
			        default:
			            printf("��Ч��ѡ��\n");
			            break;
			        }
			    } while (optionA != 6);
			    break;
			}

	
	case 2:
	{
	    option = STU_COURSE;
	    printf("\033[1;36m");
	    printf("\n\n");
	    printf("********* ѧ���γ� ********\n\n");
	    printf("\n-----------------------\n\n");
	    printf("\n");
	    printf("\033[0m");
	    printf("\033[1;34m");
	   	printf("*****���޿ογ̹���****\n");
		printf("1. ����ѡ�μ�¼\n");
		printf("2. �޸�ѡ�μ�¼\n");
		printf("3. ��ѯѡ�μ�¼\n");
		printf("4. ɾ��ѡ�μ�¼\n");
		printf("5. �˳�\n");
	    printf("\033[0m");
    int optionB;
    do
    {	printf("\n\n");
        printf("��������Ҫ��ѯ������\n\n");
        
        scanf("%d", &optionB);
        switch (optionB)
        {
        case 1:
        {
            optionB = ADD_co;
            add_enrollment();
				break;
            break;
        }
        case 2:
        {
            optionB = REVISE_co;
            modify_enrollment();
            break;
        }
        case 3:
        {
            optionB = CONSULT_co;
            show_enrollment();
			break;
        }
        case 4:
        {
            optionB = DELETE_co;
            delete_enrollment();
            optionB = 0;
			break;
        }
        case 5:
			{
				optionB  = EXIT_co;			
		        printf("ллʹ�ã�\n");
		        break;
			}
        default:
            printf("��Ч��ѡ��\n");
            break;
        }
    } while (optionB != 5);
    break;
}

case 3:
{
    option = CHOOSE_COURSE;
    printf("\033[1;36m");
    printf("\n\n");
    printf("***********ѧ��ѡ��***************\n");
    printf("\n");
    printf("\033[0m");
    printf("\033[1;34m");
   	for (int i = 0; i < 10; i++) {
		printf("%d. %s\n", i + 1, student_name[i]);
	}
    printf("\033[0m");
    int optionC;
    do
    {
        // ���ǰ 10 ����
        printf("\n\n\n");
        printf("\033[1;34m");
      	printf("\n*****************************************\n");
		printf("��ѡ��Ҫִ�еĲ�����������Ӧ��ţ���\n");
		printf("1. ѡ��γ�\n");
		printf("2. �鿴����ѡ�ν��\n");
		printf("3. �˳�ϵͳ\n");
		printf("*****************************************\n");
        printf("\033[0m");
        printf("��������Ҫ��ѯ������\n\n");
        scanf("%d", &optionC);
        switch (optionC)
        {
        case 1:
        {
            optionC = CH_co;
            printf("\n��ѡ�γ����£�\n");
			for (int i = 0; i < 4; i++) 
			{
			printf("%d. %s\n", i + 1, course_name[i]);
            break;
        	}
        
        case 2:
        {
            optionC = Con_co;
            int cid;
            do {
					printf("������Ҫѡ��Ŀγ̱�ţ�");
					scanf("%d", &cid);
					cid--;
				} while (cid < 0 || cid >= 4);
						int sid;
				// ��¼ѧ��ѡ��Ŀγ�
				select_course(sid, cid);
	            optionC = 0;
	            break;
        }
        case 3:
        {	optionC = EXIT_choose;
            printf("ллʹ�ã�\n");
            break;
        }
        default:
            printf("��Ч��ѡ��\n");
            break;
        }
    }
	} while (optionC != 3);
    break;
}

	case 4:
			{	
				option = STU_EXAM;
				int choice = 0;
				char name[20];
				float Chinese[10], English[10], Math[10], Computer[10];	
				int i, j;
				printf("\033[1;36m");
				printf("\n\n");
				printf("**************ѧ������************\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
				printf("#########��ѯ���Կ�Ŀ����ʱ��############\n\n");
				printf("\033[0m");
				int n;
				do
				{
				    printf("����ѧ��������ѯ���ԣ�����0�˳���ѯ���ԣ�\n");
				    char examName[10];
				    scanf("%s", examName);
				    if(strcmp(examName, "0") == 0)
				    {
				        choice = 1;
				    }
				    else
				    {
				        queryExam(examName);
				    }
				} while(choice != 1);

				break;
			}
	case 5:
		{		
				option = STU_SCORE;
				int optionD =0;
				printf("\033[1;34m");
				printf("##############��ѯ�ɼ�##############\n");
	    		printf("1.��ѯͬѧ���ֺܷ�ƽ���֣����沢���\n");
	    		printf("2.�ҳ������ÿ�ſγ̵���߷ּ���ѧ��\n");
	    		printf("3.���沢��ӡÿ��ͬѧ������\n");
	    		printf("4.�˳�\n");
	    		printf("*********************************************\n");
				printf("\033[0m");
				printf("\n\n");
				printf("����ѧ���ɼ�\n");
				int Valid = 0;
				int i;
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
					
						float Chinese[10], English[10], Math[10], Computer[10];	
				    	Chinese[i] = score[i].Chinese;
		        		English[i] = score[i].English;
		        		Math[i] = score[i].Math;
		        		Computer[i] = score[i].Computer;
		        		char name[20];
				     if(strcmp(name, score[i].name) == 0)
					    {
					        Valid = 1;
					        break;	
					    }
				}
			do
			{ 
			printf("\n\n");
			printf("��������Ҫ��ѯ�ɼ�������\n");
			scanf("%d", &optionD); 
			switch(optionD)
		{
			case 1:
		    {	
		    	optionD = STU_SUM_AVER;
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
					{	float Chinese[10], English[10], Math[10], Computer[10];	
					 	optionD = STU_MAX;
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
			{
				optionD = STU_KEEP;
				printf("\nͬѧ   ��ѧ   ����   Ӣ��\n");
				for(int i = 0;i < 10;i++)
				{
				printf("%2d:%s  %.2f   %.2f   %.2f  %.2f\n",i+1,score[i].name,score[i].Computer,score[i].English,score[i].Chinese,score[i].Math);
				}
			break;
			}
	 case 4:
        {	optionD = EXIT_S;
            printf("ллʹ�ã�\n");
            break;
        }
        default:
            printf("��Ч��ѡ��\n");
            break;
        
    }
     }   while (optionD != 4);
    	break;
    } 
	 	
	
	case 6:
		printf("�˳�ϵͳ\n");
			break;
			default:
		printf("��Ч��ѡ��\n");
			break;
			    }
	} 
		while(option != 6);
	return 0;
}
