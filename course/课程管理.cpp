//���޿γ̹���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student course.h"
#define MAX_NAME_LEN 20 		// ������󳤶�
#define MAX_COURSE_LEN 20		// �γ�������󳤶�
int main() {
	while (1) {
		printf("\n-----------------------\n");
		printf("*****���޿ογ̹���****\n");
		printf("1. ����ѡ�μ�¼\n");
		printf("2. �޸�ѡ�μ�¼\n");
		printf("3. ��ѯѡ�μ�¼\n");
		printf("4. ɾ��ѡ�μ�¼\n");
		printf("5. �˳�\n");
		printf("��ѡ�������");
		int choice;
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				add_enrollment();
				break;
			case 2:
				modify_enrollment();
				break;
			case 3:
				show_enrollment();
				break;
			case 4:
				delete_enrollment();
				break;
			case 5:
				return 0;
			default:
				printf("�������������ѡ��\n");
				break;
		}
	}
}

//����ʹ���˽ṹ�����洢ѧ�����γ̺�ѡ����Ϣ��ͨ�� find_student �� find_course �������в��ҡ�add_enrollment �������ѡ�μ�¼��modify_enrollment �����޸�ѡ�μ�¼��delete_enrollment ����ɾ��ѡ�μ�¼���������������ж��ж��������ݵĺϷ��Լ�顣���ͨ�� show_enrollment ��������ʾ��ǰ��ѡ����Ϣ����ѡ����Ϣ�������������ɡ�
