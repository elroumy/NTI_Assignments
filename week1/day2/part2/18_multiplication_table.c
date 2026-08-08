#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int iteration = 1; iteration <= 10; iteration++) {
        printf("%d x %d = %d\n", number, iteration, number * iteration);
    }

    return 0;
}