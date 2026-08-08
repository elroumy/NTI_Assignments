#include <stdio.h>

int main() {
    unsigned int number;
    int rotations;
    int bits = sizeof(number) * 8;

    printf("Enter a number: ");
    scanf("%u", &number);

    printf("Enter number of rotations: ");
    scanf("%d", &rotations);

    rotations = rotations % bits;

    number = (number >> rotations) | (number << (bits - rotations));

    printf("Number after rotation = %u\n", number);

    return 0;
}