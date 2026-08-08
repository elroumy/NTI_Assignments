#include <stdio.h>

int main() {
    unsigned int number1;
    unsigned int number2;

    printf("Enter number 1: ");
    scanf("%u", &number1);

    printf("Enter number 2: ");
    scanf("%u", &number2);

    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;

    printf("After swapping:\n");
    printf("Number 1 = %u\n", number1);
    printf("Number 2 = %u\n", number2);

    return 0;
}