
#include <stdio.h>
 
int add(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multi(int a, int b) { return a * b; }
int dev(int a, int b) { return a / b; }
 
/* ע����Ϣ */
enum{
	OPER_TYPE_ADD = 0,   /* �ӷ� */
	OPER_TYPE_MINUS,     /* ���� */
	OPER_TYPE_MULTI,     /* �˷� */
	OPER_TYPE_DEV,	     /* ���� */
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
	printf("������Ҫִ�е�Ч��\n");
	printf("1.�ӷ�\n 2.����\n 3.�˷�\n 4.����\n\n");
	scanf("%d",&oper);
	printf("��������������"); 
	scanf("%d %d", &x, &y);
	
	func = g_handle[oper].handle;
	
	printf("result = %d\n", func(x, y));
	return 0;
}
