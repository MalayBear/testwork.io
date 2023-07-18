#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student course.h"
int main() {
	// 显示学生列表
	for (int i = 0; i < 10; i++) {
		printf("%d. %s\n", i + 1, student_name[i]);
	}

	// 让用户输入学号并检查它是否合法
	int sid;
	do {
		printf("请输入学生编号：");
		scanf("%d", &sid);
		sid--; // 学生编号从1开始，而数组下标从0开始
	} while (sid < 0 || sid >= 10);

	// 显示操作菜单
	printf("\n*****************************************\n");
	printf("请选择要执行的操作（输入相应编号）：\n");
	printf("1. 选择课程\n");
	printf("2. 查看所有选课结果\n");
	printf("3. 退出系统\n");
	printf("*****************************************\n");

	int choice;
	do {
		printf("\n请选择要执行的操作：");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				// 显示可用的课程列表
				printf("\n可选课程如下：\n");
				for (int i = 0; i < 4; i++) {
					printf("%d. %s\n", i + 1, course_name[i]);
				}

				// 让用户输入课程编号并检查它是否合法
				int cid;
				do {
					printf("请输入要选择的课程编号：");
					scanf("%d", &cid);
					cid--;
				} while (cid < 0 || cid >= 4);

				// 记录学生选择的课程
				select_course(sid, cid);
				break;
			case 2:
				print_selected_courses(sid);
				break;
			case 3:
				printf("谢谢使用！\n");
				break;
			default:
				printf("无效的选择，请重新选择。\n");
		}
	} while (choice != 4);

	return 0;
}

