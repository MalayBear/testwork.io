#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student course.h"
int main() {
	// ��ʾѧ���б�
	for (int i = 0; i < 10; i++) {
		printf("%d. %s\n", i + 1, student_name[i]);
	}

	// ���û�����ѧ�Ų�������Ƿ�Ϸ�
	int sid;
	do {
		printf("������ѧ����ţ�");
		scanf("%d", &sid);
		sid--; // ѧ����Ŵ�1��ʼ���������±��0��ʼ
	} while (sid < 0 || sid >= 10);

	// ��ʾ�����˵�
	printf("\n*****************************************\n");
	printf("��ѡ��Ҫִ�еĲ�����������Ӧ��ţ���\n");
	printf("1. ѡ��γ�\n");
	printf("2. �鿴����ѡ�ν��\n");
	printf("3. �˳�ϵͳ\n");
	printf("*****************************************\n");

	int choice;
	do {
		printf("\n��ѡ��Ҫִ�еĲ�����");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				// ��ʾ���õĿγ��б�
				printf("\n��ѡ�γ����£�\n");
				for (int i = 0; i < 4; i++) {
					printf("%d. %s\n", i + 1, course_name[i]);
				}

				// ���û�����γ̱�Ų�������Ƿ�Ϸ�
				int cid;
				do {
					printf("������Ҫѡ��Ŀγ̱�ţ�");
					scanf("%d", &cid);
					cid--;
				} while (cid < 0 || cid >= 4);

				// ��¼ѧ��ѡ��Ŀγ�
				select_course(sid, cid);
				break;
			case 2:
				print_selected_courses(sid);
				break;
			case 3:
				printf("ллʹ�ã�\n");
				break;
			default:
				printf("��Ч��ѡ��������ѡ��\n");
		}
	} while (choice != 4);

	return 0;
}

