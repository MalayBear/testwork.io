#include <stdio.h>

int main() {
	int n, m = 1, a = 1;
	double sum = 0;
	printf("���n��");
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		m = m * i;
	}
	printf("n!=%d\n", m);
	for (int i = 1; i < n + 1; i++) {
		a = 1;
		for (int j = 1; j < i + 1; j++) {
			a = a * j;
		}
		sum = sum + a;
	}
	printf("�׳����:%.0lf\n", sum);
	return 0;
}

