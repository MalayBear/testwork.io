#include <stdio.h>
#include<string.h>
#include<stdlib.h>//atoi：将字符串转换成整数,strcmp：比较两个字符串
#include <ctype.h>//isdigit判断数字字符 
#include "option.h"//运用枚举来选择函数 
#include "score\Student score.h"//成绩
#define MAX_NAME_LEN 20 		// 姓名最大长度
#define MAX_COURSE_LEN 20
typedef struct {
    char name[20];        // 姓名
    char id[20];          // 学号
    char gender[10];      // 性别
    int year;             // 入学年份
    char contact[20];     // 联系方式
} Stu;
// 用户信息结构体，包含用户名和密码
struct user_info {
    char username[20];
    char password[20];
};

// 所有用户信息，包括初始用户admin
struct user_info users[10] = {
    {"admin", "123456"}
};

// 当前用户，初始为未登录
int current_user = -1;

// 注册函数
void register_user() {
    char username[20];
    char password[20];
    char password2[20];
    printf("\n注册新用户\n");
    printf("请输入用户名（不超过20个字符）：\n");
    scanf("%s", username);
    // 检查用户名是否已经存在
    for (int i = 0; i < 10; i++) {
        if (strcmp(users[i].username, username) == 0) {
            printf("该用户名已经存在，请重新输入！\n");
            return;
        }
    }
    printf("请输入密码（不超过20个字符）：\n");
    scanf("%s", password);
    // 获取第二次输入的密码
    printf("请再次输入密码：\n");
    scanf("%s", password2);
    // 检查两次输入的密码是否相同
    if (strcmp(password, password2) != 0) {
        printf("两次输入的密码不一致，请重新注册！\n");
        return;
    }
    // 在users数组中添加新用户
    for (int i = 0; i < 10; i++) {
        if (users[i].username[0] == '\0') {
            strcpy(users[i].username, username);
            strcpy(users[i].password, password);
            printf("注册成功！\n");
            return;
        }
    }
    printf("用户数量已满，注册失败！\n");
}

// 登录函数
void login() {
    char username[20];
    char password[20];
    printf("\n登录\n");
    printf("请输入用户名：\n");
    scanf("%s", username);
    printf("请输入密码：\n");
    scanf("%s", password);
    // 检查用户名和密码是否正确
    for (int i = 0; i < 10; i++) {
        if (strcmp(users[i].username, username) == 0
                && strcmp(users[i].password, password) == 0) {
            printf("登录成功！\n");
            current_user = i;
            return;
        }
    }
    printf("用户名或密码错误，登录失败！\n");
}

// 修改密码函数
void change_password() {
    char password1[20];
    char password2[20];
    printf("\n修改密码\n");
    printf("请输入旧密码：\n");
    char old_password[20];
    scanf("%s", old_password);
    if (strcmp(users[current_user].password, old_password) != 0) {
        printf("旧密码错误，修改密码失败！\n");
        return;
    }
    printf("请输入新密码：\n");
    scanf("%s", password1);
    printf("请确认新密码：\n");
    scanf("%s", password2);
    if (strcmp(password1, password2) != 0) {
        printf("两次密码输入不一致，修改密码失败！\n");
        return;
    }
    strcpy(users[current_user].password, password1);
    printf("修改密码成功！\n");
}

// 退出登录函数
void logout() {
    printf("\n退出登录\n");
    current_user = -1;
}


// 学生选课情况初始化
	int selected_courses[10][4];
		// 定义学生姓名和课程名称
	char *student_name[] = {"李明", "张伟", "王小红", "赵东", "刘军", "周莉", "吴力", "陈峰", "林秋", "谢燕"};
	char *course_name[] = {"College Physics", "Physical Education", "Military Theory", "Political Economics"};
// 记录学生选择的课程
void select_course(int sid, int cid) {
	if (selected_courses[sid][cid]) {
		printf("该课程已被选择，请勿重复选择。\n");
	} else {
		selected_courses[sid][cid] = 1;
		printf("选课成功！\n");
	}
}

// 输出学生的所有选课结果
void print_selected_courses(int sid) {
	printf("\n%s的选课结果如下：\n", student_name[sid]);
	for (int i = 0; i < 4; i++) {
		if (selected_courses[sid][i]) {
			printf("- %s\n", course_name[i]);
		}
	}
}

// 学生信息结构体
typedef struct {
	char name[MAX_NAME_LEN]; // 学生姓名
	int id; 				// 学生学号
} Studentss;

// 必修课课程信息结构体
typedef struct {
	char name[MAX_COURSE_LEN];   // 课程名称
	char time[20]; 			   	// 上课时间
} Course;

// 必修课选课信息结构体
typedef struct {
	int sid; 					// 学生学号
	char cname[MAX_COURSE_LEN]; // 课程名称
} Enrollment;

// 定义全局变量，存储学生和课程信息
Studentss students[] = {
	{"李明", 1},
	{"张伟", 2},
	{"王小红", 3},
	{"赵东", 4},
	{"刘军", 5},
	{"周莉", 6},
	{"吴力", 7},
	{"陈峰", 8},
	{"林秋", 9},
	{"谢燕", 10},
};
//定义结构体防止溢出 
struct Courses {
    char* name;
    char* time;
};
Courses courses[] = {
	{"Computer", "星期一和星期五  9:00"},
	{"English", "星期二和星期四   8:00"},
	{"Chinese", "星期二和星期四   9:30"},
	{"Math",    "星期一和星期五   15:00"},
};
const int CourseNum = sizeof(courses) / sizeof(Courses);
const int StudentNum = sizeof(students) / sizeof(Studentss);

Enrollment *enrollments = NULL; 	// 选课信息数组
int enrollment_num = 0; // 当前选课人数

// 根据学号查找学生，返回学生的指针，如果找不到则返回NULL
Studentss*find_student(int id) {
	for (int i = 0; i < StudentNum; i++) {
		if (students[i].id == id) {
			return &students[i];
		}
	}
	return NULL;
}

// 根据课程名称查找课程，返回课程的指针，如果找不到则返回NULL
Courses *find_course(char *name) {
	for (int i = 0; i < CourseNum; i++) {
		if (strcmp(courses[i].name, name) == 0) {
			return &courses[i];
		}
	}
	return NULL;
}

// 添加选课记录
void add_enrollment() {
	int sid;
	char cname[MAX_COURSE_LEN];
	printf("请输入学生学号:");
	scanf("%d", &sid);
	if (find_student(sid) == NULL) {
		printf("找不到该学生");
		return;
	}
	printf("请输入课程名称(首字母大写):");
	scanf("%s", cname);
	if (find_course(cname) == NULL) {
		printf("找不到该课程");
		return;
	}
	Enrollment *e = (Enrollment *)malloc(sizeof(Enrollment));
	e->sid = sid;
	strcpy(e->cname, cname);
	enrollments = (Enrollment *)realloc(enrollments, sizeof(Enrollment) * (enrollment_num + 1));
	enrollments[enrollment_num++] = *e;
	printf("添加成功\n");
}

// 修改选课记录
void modify_enrollment() {
	int sid;
	char cname[MAX_COURSE_LEN];
	printf("请输入学生学号:");
	scanf("%d", &sid);
	if (find_student(sid) == NULL) {
		printf("找不到该学生");
		return;
	}
	printf("请输入原课程名称(首字母大写):");
	scanf("%s", cname);
	int found = 0;
	for (int i = 0; i < enrollment_num; i++) {
		if (enrollments[i].sid == sid && strcmp(enrollments[i].cname, cname) == 0) {
			found = 1;
			printf("请输入新的课程名称(首字母大写):");
			scanf("%s", cname);
			if (find_course(cname) == NULL) {
				printf("找不到该课程");
				return;
			}
			strcpy(enrollments[i].cname, cname);
			printf("修改成功\n");
			break;
		}
	}
	if (!found) {
		printf("找不到该选课记录\n");
	}
}

// 删除选课记录
void delete_enrollment() {
	int sid;
	char cname[MAX_COURSE_LEN];
	printf("请输入学生学号:");
	scanf("%d", &sid);
	if (find_student(sid) == NULL) {
		printf("找不到该学生");
		return;
	}
	printf("请输入课程名称(首字母大写):");
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
			printf("删除成功\n");
			break;
		}
	}
	if (!found) {
		printf("找不到该选课记录\n");
	}
}

// 显示选课信息
void show_enrollment() {
	printf("学号\t姓名\t课程名称\t上课时间\n");
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
		Stu s[50];         // 最多维护50个学生信息
		int count = 0;         // 学生数量
		users[0] = (struct user_info){"admin", "123456"}; 
		do {
		    // 显示菜单
		    printf("\n--------------\n");
		    if (current_user == -1) {
		        printf("1. 注册\n");
		        printf("2. 登录\n");
		    }
		    else {
		        printf("3. 修改密码\n");
		        printf("0. 进入系统\n");
		        printf("4. 退出登录\n");
		    }
		    printf("请输入操作编号：\n");
		    
		    scanf("%d", &ch);
		
		    // 执行选择的操作
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
		} while (ch != 0);

	
	printf("\033[1;32m");
	printf("···········目录:学生管理系统···············\n\n\n");
	printf("\033[0m");
	printf("\033[1;33m");
	printf(" 1.学生信息········\n\n");
	printf(" 2.学生课程··········\n\n");
	printf(" 3.学生选课··········\n\n");
	printf(" 4.学生考试·······\n\n");
	printf(" 5.学生成绩··········\n\n");
	printf(" 6.退出函数系统\n\n\n");
	printf("\033[0m");
	int option;
	do
 {	
	printf("\n");
	printf("请输入你要查询的内容\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{	
				int optionA ;
				option = STU_INFOR;
				printf("\033[1;36m");
				printf("\n\n");
				printf("********* 学生信息 ********\n\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
		        printf("1. 添加学生信息\n\n");
		        printf("2. 修改学生信息\n\n");
		        printf("3. 删除学生信息\n\n");
		        printf("4. 查询学生信息\n\n");
		        printf("5. 显示所有学生信息\n\n");
		        printf("6. 退出该查询\n\n");
		    do{
				    printf("---请选择要进行的操作---：\n\n");
				    printf("\n");
				    printf("\033[0m");
					scanf("%d",&optionA);
				switch(optionA)
				{
				
				
					case 1:
					{	
						optionA = ADD_INFOR;
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
				}
					case 2:
					{	
						optionA = REVISE_INFOR;
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
					}
				 case 3:
			        {	
						optionA = DELETE_INFOR;
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
			        }
			    case 4:
			    	{
			    		optionA = CONSULT_INFOR;
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
				}
				case 5:
					{
						optionA = SHOW_INFOR;
						printf("学生信息如下：\n");
                	for (int i = 0; i < count; i++) {
	                    printf("姓名：%s\n", s[i].name);
	                    printf("学号：%s\n", s[i].id);
	                    printf("性别：%s\n", s[i].gender);
	                    printf("入学年份：%d\n", s[i].year);
	                    printf("联系方式：%s\n", s[i].contact);
	                    printf("\n");
                	}
                		optionA = 0;
                break;
					}
				case 6:
					{
							// 退出系统
		                printf("谢谢使用！\n");
		                break;
					}
			        
			        default:
			            printf("无效的选项\n");
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
	    printf("********* 学生课程 ********\n\n");
	    printf("\n-----------------------\n\n");
	    printf("\n");
	    printf("\033[0m");
	    printf("\033[1;34m");
	   	printf("*****必修课课程管理****\n");
		printf("1. 增加选课记录\n");
		printf("2. 修改选课记录\n");
		printf("3. 查询选课记录\n");
		printf("4. 删除选课记录\n");
		printf("5. 退出\n");
	    printf("\033[0m");
    int optionB;
    do
    {	printf("\n\n");
        printf("请输入你要查询的内容\n\n");
        
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
		        printf("谢谢使用！\n");
		        break;
			}
        default:
            printf("无效的选项\n");
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
    printf("***********学生选课***************\n");
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
        // 输出前 10 个数
        printf("\n\n\n");
        printf("\033[1;34m");
      	printf("\n*****************************************\n");
		printf("请选择要执行的操作（输入相应编号）：\n");
		printf("1. 选择课程\n");
		printf("2. 查看所有选课结果\n");
		printf("3. 退出系统\n");
		printf("*****************************************\n");
        printf("\033[0m");
        printf("请输入你要查询的内容\n\n");
        scanf("%d", &optionC);
        switch (optionC)
        {
        case 1:
        {
            optionC = CH_co;
            printf("\n可选课程如下：\n");
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
					printf("请输入要选择的课程编号：");
					scanf("%d", &cid);
					cid--;
				} while (cid < 0 || cid >= 4);
						int sid;
				// 记录学生选择的课程
				select_course(sid, cid);
	            optionC = 0;
	            break;
        }
        case 3:
        {	optionC = EXIT_choose;
            printf("谢谢使用！\n");
            break;
        }
        default:
            printf("无效的选项\n");
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
				printf("**************学生考试************\n");
				printf("\n");
				printf("\033[0m");
				printf("\033[1;34m");
				printf("#########查询考试科目及其时间############\n\n");
				printf("\033[0m");
				int n;
				do
				{
				    printf("输入学生姓名查询考试，输入0退出查询考试：\n");
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
				printf("##############查询成绩##############\n");
	    		printf("1.查询同学的总分和平均分，保存并输出\n");
	    		printf("2.找出并输出每门课程的最高分及其学号\n");
	    		printf("3.保存并打印每个同学的名字\n");
	    		printf("4.退出\n");
	    		printf("*********************************************\n");
				printf("\033[0m");
				printf("\n\n");
				printf("输入学生成绩\n");
				int Valid = 0;
				int i;
				printf("学生的名单及学号如下：\n");
				for(i = 0; i < 10; i++) 
				{	
				    printf("%d号: %s\n", i + 1, score[i].name);
				    printf("请输入%s同学的计算机成绩：\n", score[i].name);
				    scanf("%f", &score[i].Computer);
				    while(score[i].Computer < 0 || score[i].Computer > 100) 
				    {
				        printf("该成绩无效！请重新输入%s同学的计算机成绩\n", score[i].name);
				        scanf("%f", &score[i].Computer);
				    }
				    printf("请输入%s同学的英语成绩：\n", score[i].name);
				    scanf("%f", &score[i].English);
				    while(score[i].English < 0 || score[i].English > 100)
				    {
				        printf("该成绩无效！请重新输入%s同学的英语成绩\n", score[i].name);
				        scanf("%f", &score[i].English);
				    }
				    printf("请输入%s同学的语文成绩：\n", score[i].name);
				    scanf("%f", &score[i].Chinese);
				    while(score[i].Chinese < 0 || score[i].Chinese > 100) 
				    {
				        printf("该成绩无效！请重新输入%s同学的语文成绩\n", score[i].name);
				        scanf("%f", &score[i].Chinese);
				    }
				    printf("请输入%s同学的数学成绩：\n", score[i].name);
				    scanf("%f", &score[i].Math);
				    while(score[i].Math < 0 || score[i].Math > 100) 
				    {
				        printf("该成绩无效！请重新输入%s同学的计算机成绩\n", score[i].name);
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
			printf("请输入你要查询成绩的内容\n");
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
			    		printf("语文最高分：学生 %d, %.2f 分\n", max_Chinese_id, max_Chinese_grade);
			    		MAX(English, &max_English_grade, &max_English_id);
			    		printf("英语最高分：学生 %d, %.2f 分\n", max_English_id, max_English_grade);
			    		MAX(Math, &max_Math_grade, &max_Math_id);
			    		printf("数学最高分：学生 %d, %.2f 分\n", max_Math_id, max_Math_grade);
			    		MAX(Computer, &max_Computer_grade, &max_Computer_id);
			    		printf("计算机最高分：学生 %d, %.2f 分\n", max_Computer_id, max_Computer_grade);
			    		break; 
					}	
						
			

		case 3:
			{
				optionD = STU_KEEP;
				printf("\n同学   数学   语文   英语\n");
				for(int i = 0;i < 10;i++)
				{
				printf("%2d:%s  %.2f   %.2f   %.2f  %.2f\n",i+1,score[i].name,score[i].Computer,score[i].English,score[i].Chinese,score[i].Math);
				}
			break;
			}
	 case 4:
        {	optionD = EXIT_S;
            printf("谢谢使用！\n");
            break;
        }
        default:
            printf("无效的选项\n");
            break;
        
    }
     }   while (optionD != 4);
    	break;
    } 
	 	
	
	case 6:
		printf("退出系统\n");
			break;
			default:
		printf("无效的选项\n");
			break;
			    }
	} 
		while(option != 6);
	return 0;
}
