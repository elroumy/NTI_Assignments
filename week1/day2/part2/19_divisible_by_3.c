#include <stdio.h>

int main() {
    int number;

    for (int iteration = 1; iteration <= 5; iteration++) {
        printf("Enter number %d: ", iteration);
        scanf("%d", &number);

        if (number % 3 == 0) {
            printf("%d is divisible by 3\n", number);
        }
    }

    return 0;
}
