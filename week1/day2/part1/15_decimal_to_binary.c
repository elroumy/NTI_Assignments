#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;

    printf("Enter a decimal number: ");
    scanf("%u", &number);

    printf("Binary: ");

    for (int itteration = bits - 1; itteration >= 0; itteration --) {
        printf("%u", (number >> itteration) & 1);
    }

    printf("\n");

    return 0;
}