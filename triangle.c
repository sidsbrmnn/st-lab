#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, b, c;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    int flag = 0;
    if (a < 1 || a > 10) {
        printf("a is out of range\n");
        flag = 1;
    }
    if (b < 1 || b > 10) {
        printf("b is out of range\n");
        flag = 1;
    }
    if (c < 1 || c > 10) {
        printf("c is out of range\n");
        flag = 1;
    }
    if (flag == 1) {
        return 1;
    }

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        if ((a == b) && (b == c)) {
            printf("Given dimensions form an equilateral triangle\n");
        } else if ((a == b) || (a == c) || (b == c)) {
            printf("Given dimensions form an isoceles triangle\n");
        } else {
            printf("Given dimensions form a scalene triangle\n");
        }
    } else {
        printf("Given dimensions do not form a triangle\n");
    }

    return 0;
}
