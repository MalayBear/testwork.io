
#include <stdio.h>
 
int add(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multi(int a, int b) { return a * b; }
int dev(int a, int b) { return a / b; }
 
/* 注册消息 */
enum{
	OPER_TYPE_ADD = 0,   /* 加法 */
	OPER_TYPE_MINUS,     /* 减法 */
	OPER_TYPE_MULTI,     /* 乘法 */
	OPER_TYPE_DEV,	     /* 除法 */
	OPER_TYPE_MAX
};
 
typedef struct handle_cb{
	int type;
	int (*handle)(int a, int b);
}HANDLE_CB;
 
HANDLE_CB g_handle [] = {
	{ OPER_TYPE_ADD, add },
	{ OPER_TYPE_MINUS, minus },
	{ OPER_TYPE_MULTI, multi },
	{ OPER_TYPE_DEV, dev}
};

int main(void)
{
	int i; 
	int type;
	int x, y, oper;
	int (*func)(int x, int y);
	printf("请输入要执行的效果\n");
	printf("1.加法\n 2.减法\n 3.乘法\n 4.除法\n\n");
	scanf("%d",&oper);
	printf("请输入两个数字"); 
	scanf("%d %d", &x, &y);
	
	func = g_handle[oper].handle;
	
	printf("result = %d\n", func(x, y));
	return 0;
}
