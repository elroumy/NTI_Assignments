#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &number);

    for (int i = bits - 1; i >= 0; i--) {
        if ((number >> i) & 1)
            break;

        count++;
    }

    printf("Number of leading zeros = %d\n", count);

    return 0;
}