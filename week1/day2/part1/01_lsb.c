#include <stdio.h>

int main() {
    unsigned int number;

    printf("Enter a number: ");
    scanf("%u", &number);

    if (number & 1)
        printf("LSB is set (1)\n");
    else
        printf("LSB is not set (0)\n");

    return 0;
}