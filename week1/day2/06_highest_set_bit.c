#include <stdio.h>

int main() {
    unsigned int number;
    int bits = sizeof(number) * 8;
    int position = -1;

    printf("Enter a number: ");
    scanf("%u", &number);

    for (int itteration = bits - 1; itteration >= 0; itteration--) {
        if ((number >> itteration) & 1) {
            position = itteration;
            break;
        }
    }

    if (position == -1)
        printf("No set bit found\n");
    else
        printf("Highest order set bit = %d\n", position);

    return 0;
}