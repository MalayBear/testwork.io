//必修课程管理
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student course.h"
#define MAX_NAME_LEN 20 		// 姓名最大长度
#define MAX_COURSE_LEN 20		// 课程名称最大长度
int main() {
	while (1) {
		printf("\n-----------------------\n");
		printf("*****必修课课程管理****\n");
		printf("1. 增加选课记录\n");
		printf("2. 修改选课记录\n");
		printf("3. 查询选课记录\n");
		printf("4. 删除选课记录\n");
		printf("5. 退出\n");
		printf("请选择操作：");
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
				printf("输入错误，请重新选择\n");
				break;
		}
	}
}

//程序使用了结构体来存储学生、课程和选课信息，通过 find_student 和 find_course 函数进行查找。add_enrollment 用于添加选课记录，modify_enrollment 用于修改选课记录，delete_enrollment 用于删除选课记录，在这三个函数中都有对输入数据的合法性检查。最后通过 show_enrollment 函数来显示当前的选课信息，将选课信息数组遍历输出即可。
