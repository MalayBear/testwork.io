#include <stdio.h>
#include <math.h>

// ����׳�
int factorial(int n) {// �ݹ麯��

    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// �������ʽϵ��
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

// ���������C
int calculateCombination(int n, int k) {
    return binomialCoefficient(n, k);
}

// ����������A
int calculatePermutation(int n, int k) {
    return factorial(n) / factorial(n - k);
}

// �������ֲ��ĸ���P��X=k)=C (n,k)��p^k��* (1-p)^ (n-k)
double calculateBinomialDistribution(int n, int k, double p) {
    return binomialCoefficient(n, k) * pow(p, k) * pow(1 - p, n - k);
}

// ����ʽչ��
void polynomialExpansion(int n) {
    printf("����ʽչ��ʽΪ��");
    for (int i = 0; i <= n; i++) {
        int coefficient = binomialCoefficient(n, i);
        printf("%dx^%d ", coefficient, i);
        if (i < n) {
            printf("+ ");
        }
    }
    printf("\n");
}

// ��ӡ���������
void printPascalTriangle(int n) {
    printf("��������Σ�\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            int coefficient = binomialCoefficient(i, j);
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}

// ����ʽϵ����������ѡ�����
void binomialCoefficientFunction() {
    int choice = 1;
    int n, k;
    double p;

    while (choice != 0) {
        printf("\n");
        printf("\033[1;33m");// �����ı���ɫΪ����ɫ
        printf("****** ����ʽϵ���������� ******\n");
        printf("\033[0m");// �ָ�Ĭ���ı���ɫ

        printf("\n");
        printf("1. ���������\n");
        printf("2. ����������\n");
        printf("3. �������ֲ��ĸ���\n");
        printf("4. ����ʽչ��\n");
        printf("5. ��ӡ���������\n");
        printf("0. �˳�����\n");

        printf("\n");
        printf("��ѡ��Ҫִ�еĹ��ܣ�\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("����������n��k��");
            scanf("%d%d", &n, &k);
            printf("�����C(%d, %d) = %d\n", n, k, calculateCombination(n, k));
            break;
        case 2:
            printf("����������n��k��");
            scanf("%d%d", &n, &k);
            printf("������P(%d, %d) = %d\n", n, k, calculatePermutation(n, k));
            break;
        case 3:
            printf("���������ֲ��Ĳ�����n, k, p��");
            scanf("%d%d%lf", &n, &k, &p);
            printf("����ֲ��ĸ���Ϊ��%lf\n", calculateBinomialDistribution(n, k, p));
            break;
        case 4:
            printf("���������ʽ�Ľ�����");
            scanf("%d", &n);
            polynomialExpansion(n);
            break;
        case 5:
            printf("��������������ε�������");
            scanf("%d", &n);
            printPascalTriangle(n);
            break;
        case 0:
            printf("���˳�����ʽϵ���������ܡ�\n");
            break;
        default:
            printf("��Ч��ѡ��\n");
            break;
        }
    }
}

int main() {
    binomialCoefficientFunction();
    return 0;
}
