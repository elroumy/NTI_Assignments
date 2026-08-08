#include <stdio.h>

int main() {
    unsigned int number;
    int position;

    printf("Enter a number: ");
    scanf("%u", &number);

    printf("Enter bit position: ");
    scanf("%d", &position);

    if ((number >> position) & 1)
        printf("Bit is set (1)\n");
    else
        printf("Bit is not set (0)\n");

    return 0;
}