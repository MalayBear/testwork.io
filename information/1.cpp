#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student infor.h"
int main() {
    Student s[50];         // ���ά��50��ѧ����Ϣ
    int count = 0;         // ѧ������
    int choice;            // �û�ѡ��Ĳ���
    while (1) {
        printf("---��ѡ��Ҫ���еĲ���---��\n\n");
        printf("1. ���ѧ����Ϣ\n\n");
        printf("2. �޸�ѧ����Ϣ\n\n");
        printf("3. ɾ��ѧ����Ϣ\n\n");
        printf("4. ��ѯѧ����Ϣ\n\n");
        printf("5. ��ʾ����ѧ����Ϣ\n\n");
        printf("6. �˳��ò�ѯ\n\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                // ���ѧ����Ϣ
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
            case 2:
                // �޸�ѧ����Ϣ
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
            case 3:
                // ɾ��ѧ����Ϣ
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
            case 4:
                // ��ѯѧ����Ϣ
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
                break;
            case 5:
                // ��ʾ����ѧ����Ϣ
                printf("ѧ����Ϣ���£�\n");
                for (int i = 0; i < count; i++) {
                    printf("������%s\n", s[i].name);
                    printf("ѧ�ţ�%s\n", s[i].id);
                    printf("�Ա�%s\n", s[i].gender);
                    printf("��ѧ��ݣ�%d\n", s[i].year);
                    printf("��ϵ��ʽ��%s\n", s[i].contact);
                    printf("\n");
                }
                break;
            case 6:
                // �˳�ϵͳ
                printf("ллʹ�ã�\n");
                exit(0);
            default:
                printf("�����������������룡\n");
        }
    }
    return 0;
}

