#include <stdio.h>

int main() {
    int month;
    int year;

    printf("Enter month number: ");
    scanf("%d", &month);

    if (month == 2) {
        printf("Enter year: ");
        scanf("%d", &year);

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("29 days\n");
        } else {
            printf("28 days\n");
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30 days\n");
    } else if (month >= 1 && month <= 12) {
        printf("31 days\n");
    } else {
        printf("Invalid month\n");
    }

    return 0;
}