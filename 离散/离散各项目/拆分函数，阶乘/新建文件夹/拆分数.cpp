#include <stdio.h>
void pl(int n, int min, int a[], int o, int *p);
void plsame(int n, int m, int a[], int o, int *p);

int main() {
	int n, m, a[100], count = 0;
	printf("***********拆分数函数************\n");
	printf("拆分数函数就是把n划分成所有元素不大于n的组合。\n");
	printf("以n=4为例，4=1+1+1+1=2+1+1=2+2=3+1\n");
	printf("无重复元素为:{1,3}\n");
	printf("有重复元素为{1，1，1，1}，{2，1，1}，{2，2}\n\n\n\n");
	printf("输入n:\n");
	scanf("%d", &n);
	int *p = &count;
	printf("*********************\n");
	pl(n, 1, a, 0, p);
	printf("无重复元素可以分成以上%d种.\n", count);
	printf("*********************\n");
	count = 0;
	plsame(n, 1, a, 0, p);
	printf("有重复元素可以分成以上%d种.\n", count);
	printf("*********************\n");
	return 0;
}

void pl(int n, int m, int a[], int o, int *p) {
	for (int i = m; n - i > i; i++) {
		(*p)++;
		a[o] = i;
		a[o + 1] = n - i;
		for (int j = 0; j <= o + 1; j++)
			printf("%d ", a[j]);
		printf("\n");
		pl(n - i, i + 1, a, o + 1, p);
	}
}

void plsame(int n, int m, int a[], int o, int *p) {
	for (int i = m; n - i >= i; i++) {
		(*p)++;
		a[o] = i;
		a[o + 1] = n - i;
		for (int j = 0; j <= o + 1; j++)
			printf("%d ", a[j]);
		printf("\n");
		plsame(n - i, i, a, o + 1, p);
	}

}






