#include <stdio.h>
#include <string.h>
#include"register.h"
int main() {
    while (1) {
        // ��ʾ�˵�
        printf("\n--------------\n");
        if (current_user == -1) {
            printf("1. ע��\n");
            printf("2. ��¼\n");
        }
        else {
            printf("3. �޸�����\n");
            printf("4. �˳���¼\n");
        }
        printf("0. �˳�ϵͳ\n");
        printf("�����������ţ�\n");
        int choice;
        scanf("%d", &choice);

        // ִ��ѡ��Ĳ���
        switch (choice) {
        case 0:
            return 0;
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
    }
    return 0;
}

