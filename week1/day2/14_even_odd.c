#include <stdio.h>

int main() {
    unsigned int number;

    printf("Enter a number: ");
    scanf("%u", &number);

    if (number & 1)
        printf("Odd\n");
    else
        printf("Even\n");

    return 0;
}
