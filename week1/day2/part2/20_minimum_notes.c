#include <stdio.h>

int main() {
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("500 notes = %d\n", amount / 500);
    amount = amount % 500;

    printf("100 notes = %d\n", amount / 100);
    amount = amount % 100;

    printf("50 notes = %d\n", amount / 50);
    amount = amount % 50;

    printf("20 notes = %d\n", amount / 20);
    amount = amount % 20;

    printf("10 notes = %d\n", amount / 10);
    amount = amount % 10;

    printf("5 notes = %d\n", amount / 5);
    amount = amount % 5;

    printf("2 notes = %d\n", amount / 2);
    amount = amount % 2;

    printf("1 notes = %d\n", amount);

    return 0;
}
