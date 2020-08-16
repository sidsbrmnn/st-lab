#include <stdbool.h>
#include <stdio.h>

bool is_leap_year(int const year) {
    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main(int argc, char const *argv[]) {
    int const month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int date, month, year;
    printf("Enter date, month & year: ");
    scanf("%d%d%d", &date, &month, &year);

    int flag = 0;
    if (year < 1812 || year > 2012) {
        printf("Invalid year\n");
        flag = 1;
    }
    int days = month_days[month - 1];
    if (date < 1 || date > days) {
        printf("Invalid date\n");
        flag = 1;
    }
    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        flag = 1;
    }
    if (flag == 1) {
        return 1;
    }

    if (month == 2 && is_leap_year(year) == true) {
        days = 29;
    }

    int next_date = date + 1;
    int next_month = month;
    int next_year = year;

    if (next_date > days) {
        next_date = 1;
        next_month += 1;
    }

    if (next_month > 12) {
        next_month = 1;
        next_year += 1;
    }

    printf("Current date: %d/%d/%d", date, month, year);
    printf("Next date: %d/%d/%d", next_date, next_month, next_year);

    return 0;
}
