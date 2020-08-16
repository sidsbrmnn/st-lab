#include <stdio.h>

int main(int argc, char const *argv[]) {
    int english, kannada, maths, science, social_science;

    printf("Enter marks for English: ");
    scanf("%d", &english);
    printf("Enter marks for Kannada: ");
    scanf("%d", &kannada);
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    printf("Enter marks for Social Science: ");
    scanf("%d", &social_science);

    if (english > 100 || english < 0 || kannada < 0 || kannada > 100 ||
        maths < 0 || maths > 100 || science < 0 || science > 100 ||
        social_science < 0 || social_science > 100) {
        printf("Invalid input\n");
        return 1;
    }

    float average =
        (english + kannada + maths + science + social_science) / 5.00;

    printf("Average: %.2f\n", average);

    if (average >= 80) {
        printf("Grade A+\n");
    } else if (average >= 70 && average < 80) {
        printf("Grade A\n");
    } else if (average >= 60 && average < 70) {
        printf("Grade B+\n");
    } else if (average >= 50 && average < 60) {
        printf("Grade B\n");
    } else if (average >= 40 && average < 50) {
        printf("Grade C+\n");
    } else if (average >= 35 && average < 40) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
