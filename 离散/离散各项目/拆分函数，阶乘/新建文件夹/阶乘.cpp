#include <stdio.h>

int main() {
	int n, m = 1, a = 1;
	double sum = 0;
	printf("Êä³ön£º");
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
	printf("½×³ËÇóºÍ:%.0lf\n", sum);
	return 0;
}

