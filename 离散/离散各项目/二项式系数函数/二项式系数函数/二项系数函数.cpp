#include <stdio.h>
#include <math.h>

// 计算阶乘
int factorial(int n) {// 递归函数

    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// 计算二项式系数
int binomialCoefficient(int n, int k) {

    if (k > n) {
        return 0;
    }
    else {
        int numerator = factorial(n);
        int denominator = factorial(k) * factorial(n - k);
        return numerator / denominator;
    }
}

// 计算组合数C
int calculateCombination(int n, int k) {
    return binomialCoefficient(n, k);
}

// 计算排列数A
int calculatePermutation(int n, int k) {
    return factorial(n) / factorial(n - k);
}

// 计算二项分布的概率P（X=k)=C (n,k)（p^k）* (1-p)^ (n-k)
double calculateBinomialDistribution(int n, int k, double p) {
    return binomialCoefficient(n, k) * pow(p, k) * pow(1 - p, n - k);
}

// 多项式展开
void polynomialExpansion(int n) {
    printf("多项式展开式为：");
    for (int i = 0; i <= n; i++) {
        int coefficient = binomialCoefficient(n, i);
        printf("%dx^%d ", coefficient, i);
        if (i < n) {
            printf("+ ");
        }
    }
    printf("\n");
}

// 打印杨辉三角形
void printPascalTriangle(int n) {
    printf("杨辉三角形：\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            int coefficient = binomialCoefficient(i, j);
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}

// 二项式系数函数功能选项界面
void binomialCoefficientFunction() {
    int choice = 1;
    int n, k;
    double p;

    while (choice != 0) {
        printf("\n");
        printf("\033[1;33m");// 设置文本颜色为亮黄色
        printf("****** 二项式系数函数功能 ******\n");
        printf("\033[0m");// 恢复默认文本颜色

        printf("\n");
        printf("1. 计算组合数\n");
        printf("2. 计算排列数\n");
        printf("3. 计算二项分布的概率\n");
        printf("4. 多项式展开\n");
        printf("5. 打印杨辉三角形\n");
        printf("0. 退出程序\n");

        printf("\n");
        printf("请选择要执行的功能：\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("请输入整数n和k：");
            scanf("%d%d", &n, &k);
            printf("组合数C(%d, %d) = %d\n", n, k, calculateCombination(n, k));
            break;
        case 2:
            printf("请输入整数n和k：");
            scanf("%d%d", &n, &k);
            printf("排列数P(%d, %d) = %d\n", n, k, calculatePermutation(n, k));
            break;
        case 3:
            printf("请输入二项分布的参数：n, k, p：");
            scanf("%d%d%lf", &n, &k, &p);
            printf("二项分布的概率为：%lf\n", calculateBinomialDistribution(n, k, p));
            break;
        case 4:
            printf("请输入多项式的阶数：");
            scanf("%d", &n);
            polynomialExpansion(n);
            break;
        case 5:
            printf("请输入杨辉三角形的行数：");
            scanf("%d", &n);
            printPascalTriangle(n);
            break;
        case 0:
            printf("已退出二项式系数函数功能。\n");
            break;
        default:
            printf("无效的选项\n");
            break;
        }
    }
}

int main() {
    binomialCoefficientFunction();
    return 0;
}
