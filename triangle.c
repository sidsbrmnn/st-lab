#include <stdio.h>

int main()
{
    int a, b, c, flag = 0;

    printf("Enter sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= 0 || a > 10)
    {
        printf("a is out of range.\n");
        flag = 1;
    }
    if (b <= 0 || b > 10)
    {
        printf("b is out of range.\n");
        flag = 1;
    }
    if (c <= 0 || c > 10)
    {
        printf("c is out of range.\n");
        flag = 1;
    }

    if (flag == 1)
        return 0;

    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        if ((a == b) && (b == c))
            printf("Equilateral triangle.\n");
        else if ((a == b) || (a == c) || (b == c))
            printf("Isoceles triangle.\n");
        else
            printf("Scalene triangle.\n");
    }
    else
    {
        printf("Not a triangle.\n");
    }
}
