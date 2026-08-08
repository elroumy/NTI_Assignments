#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;
    int position = -1;

    printf("Enter a number: ");
    scanf("%u", &number);

    for (int i = 0; i < bits; i++) {
        if ((number >> i) & 1) {
            position = i;
            break;
        }
    }

    if (position == -1)
        printf("No set bit found\n");
    else
        printf("Lowest order set bit = %d\n", position);

    return 0;
}