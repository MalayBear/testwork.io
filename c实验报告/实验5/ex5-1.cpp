#include <stdio.h>
#define PAI 3.14159265358979
#include <math.h>
int main()
{
    int r, i;
    char choice;
    double result;
    double t;
    printf("*****menu*****\n");
    printf("1¡¢circle\n");
    printf("2¡¢area\n");
    printf("3¡¢both\n");
    printf("Please enter you choice£º\n");
    scanf("%c", &choice);
    printf("Please enter the radius£º\n");
    scanf("%d", &r);
    for (i = 1; i <= 3; i++)
    {

        if (r == 0)
            break;
        switch (choice)
        {
        case '1':
            result = 2 * PAI * r;
            printf("circle is %.2f", result);
            break;
        case '2':
            result = 2 * PAI * pow(r, 2);
            printf("area is %.2f", result);
            break;
        case '3':
            result = 2 * PAI * r;
            t = 2 * PAI * pow(r, 2);
            printf("circle and area is %.2fand %.2f\n", result, t);
            break;
        default:
            printf("Selection error!\n");
            break;
        }

        return 0;
    }
}

