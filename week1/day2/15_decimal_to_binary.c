#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;

    printf("Enter a decimal number: ");
    scanf("%u", &number);

    printf("Binary: ");

    for (int i = bits - 1; i >= 0; i--) {
        printf("%u", (number >> i) & 1);
    }

    printf("\n");

    return 0;
}