#include <stdio.h>

int main() {
    unsigned int number;

    printf("Enter a number: ");
    scanf("%u", &number);

    number = ~number;

    printf("Number after flipping all bits = %u\n", number);

    return 0;
}