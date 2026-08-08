#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &number);

    for (int i = 0; i < bits; i++) {
        if ((number >> i) & 1)
            break;

        count++;
    }

    printf("Number of trailing zeros = %d\n", count);

    return 0;
}