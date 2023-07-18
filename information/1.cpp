#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student infor.h"
int main() {
    Student s[50];         // 最多维护50个学生信息
    int count = 0;         // 学生数量
    int choice;            // 用户选择的操作
    while (1) {
        printf("---请选择要进行的操作---：\n\n");
        printf("1. 添加学生信息\n\n");
        printf("2. 修改学生信息\n\n");
        printf("3. 删除学生信息\n\n");
        printf("4. 查询学生信息\n\n");
        printf("5. 显示所有学生信息\n\n");
        printf("6. 退出该查询\n\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                // 添加学生信息
                printf("请输入学生姓名：");
                scanf("%s", s[count].name);
                printf("请输入学生学号：");
                scanf("%s", s[count].id);
                printf("请输入学生性别：");
                scanf("%s", s[count].gender);
                printf("请输入学生入学年份：");
                scanf("%d", &s[count].year);
                printf("请输入学生联系方式：");
                scanf("%s", s[count].contact);
                count++;
                printf("添加成功！\n");
                break;
            case 2:
                // 修改学生信息
                printf("请输入要修改的学生学号：");
                char id[20];
                scanf("%s", id);
                for (int i = 0; i < count; i++) {
                    if (strcmp(s[i].id, id) == 0) {
                        printf("请输入学生姓名：");
                        scanf("%s", s[i].name);
                        printf("请输入学生性别：");
                        scanf("%s", s[i].gender);
                        printf("请输入学生入学年份：");
                        scanf("%d", &s[i].year);
                        printf("请输入学生联系方式：");
                        scanf("%s", s[i].contact);
                        printf("修改成功！\n");
                        break;
                    }
                }
                break;
            case 3:
                // 删除学生信息
                printf("请输入要删除的学生学号：");
                char id2[20];
                scanf("%s", id2);
                for (int i = 0; i < count; i++) {
                    if (strcmp(s[i].id, id2) == 0) {
                        // 将该学生后面的信息向前移动一个位置
                        for (int j = i; j < count - 1; j++) {
                            s[j] = s[j+1];
                        }
                        count--;
                        printf("删除成功！\n");
                        break;
                    }
                }
                break;
            case 4:
                // 查询学生信息
                printf("请输入要查询的学生学号：");
                char id3[20];
                scanf("%s", id3);
                for (int i = 0; i < count; i++) {
                    if (strcmp(s[i].id, id3) == 0) {
                        printf("姓名：%s\n", s[i].name);
                        printf("学号：%s\n", s[i].id);
                        printf("性别：%s\n", s[i].gender);
                        printf("入学年份：%d\n", s[i].year);
                        printf("联系方式：%s\n", s[i].contact);
                        break;
                    }
                }
                break;
            case 5:
                // 显示所有学生信息
                printf("学生信息如下：\n");
                for (int i = 0; i < count; i++) {
                    printf("姓名：%s\n", s[i].name);
                    printf("学号：%s\n", s[i].id);
                    printf("性别：%s\n", s[i].gender);
                    printf("入学年份：%d\n", s[i].year);
                    printf("联系方式：%s\n", s[i].contact);
                    printf("\n");
                }
                break;
            case 6:
                // 退出系统
                printf("谢谢使用！\n");
                exit(0);
            default:
                printf("输入有误，请重新输入！\n");
        }
    }
    return 0;
}

