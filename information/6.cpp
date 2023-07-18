#include <stdio.h>
#include <string.h>
#include"register.h"
int main() {
    while (1) {
        // 显示菜单
        printf("\n--------------\n");
        if (current_user == -1) {
            printf("1. 注册\n");
            printf("2. 登录\n");
        }
        else {
            printf("3. 修改密码\n");
            printf("4. 退出登录\n");
        }
        printf("0. 退出系统\n");
        printf("请输入操作编号：\n");
        int choice;
        scanf("%d", &choice);

        // 执行选择的操作
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
                printf("请先登录！\n");
            }
            else {
                change_password();
            }
            break;
        case 4:
            if (current_user == -1) {
                printf("请先登录！\n");
            }
            else {
                logout();
            }
            break;
        default:
            printf("无效的操作编号！\n");
            break;
        }
    }
    return 0;
}

