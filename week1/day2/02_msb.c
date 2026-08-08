#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;

    printf("Enter a number: ");
    scanf("%u", &number);

    if ((number >> (bits - 1)) & 1)
        printf("MSB is set (1)\n");
    else
        printf("MSB is not set (0)\n");

    return 0;
}