
#include <stdio.h>
#include <time.h>

double fact(int n); 

void before_func()
{
    printf("������ʼִ��...\n");
}

void after_func()
{
    printf("����ִ�н���...\n");
}

void func()
{
    int m, n;
    double result;
    printf("����n��m: ");
    scanf("%d %d", &m, &n);
    result = fact(n) / fact(m) / fact(n - m);
    printf("�������Ϊ��result = %.0lf\n", result);
}

double fact(int n)
{
    double fact = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

void plug_func(void (*before)(), void (*after)(), void (*func)())
{
    clock_t start_time, end_time;
    double time_diff;
    start_time = clock();
    before();
    func();
    after();
    end_time = clock();
    time_diff = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("����ִ��ʱ�䣺%.6f ��\n", time_diff);
}

int main()
{
    plug_func(before_func, after_func, func);
    return 0;
}



