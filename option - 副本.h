#include <stdio.h>

//枚举 
enum Option 
{
    STU_INFOR = 1, //学生信息 
    STU_COURSE, //学生课程 
  	CHOOSE_COURSE, //选择课程 
	STU_EXAM,//学生考试 
	STU_SCORE,//学生成绩 
    EXIT,//退出 
};

//学生信息 
enum infor
{
	ADD_INFOR = 1,//添加 
	REVISE_INFOR,//修改 
	DELETE_INFOR,//删除 
	CONSULT_INFOR,//查询 
	SHOW_INFOR,	//显示
	EXIT_INFOR,//退出 
};


//课程
enum co
{
	ADD_co = 1,//添加课程 
	REVISE_co ,//修改课程 
	CONSULT_co,//查询课程 
	DELETE_co,//删除课程 
	EXIT_co,//退出 
};
//选择课程
enum choose
{
	CH_co = 1,//选择课程 
	Con_co ,//查看选课结果 
	EXIT_choose,//退出 
} ;

//学生成绩 
enum STU_S
{
	STU_SUM_AVER = 1,//总分和平均分 
	STU_MAX ,//最高分 
	STU_KEEP,//保存 
	EXIT_S,//退出 
 
};

