#include <stdio.h>

int main() {
    unsigned int number;
    int position;

    printf("Enter a number: ");
    scanf("%u", &number);

    printf("Enter bit position: ");
    scanf("%d", &position);

    number = number & ~(1U << position);

    printf("Number after clearing bit = %u\n", number);

    return 0;
}