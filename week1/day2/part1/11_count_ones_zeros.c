#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;
    int ones = 0;
    int zeros = 0;

    printf("Enter a number: ");
    scanf("%u", &number);

    for (int itteration = 0; itteration < bits; itteration++) {
        if ((number >> itteration) & 1)
            ones++;
        else
            zeros++;
    }

    printf("Number of ones = %d\n", ones);
    printf("Number of zeros = %d\n", zeros);

    return 0;
}