#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &number);

    for (int itteration = bits - 1; itteration >= 0; itteration--) {
        if ((number >> itteration) & 1)
            break;

        count++;
    }

    printf("Number of leading zeros = %d\n", count);

    return 0;
}