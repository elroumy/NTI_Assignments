#include <stdio.h>

int main() {
    int sum = 0;

    for (int iteration = 1; iteration <= 10; iteration++) {
        sum = sum + iteration;
    }

    printf("Sum = %d\n", sum);

    return 0;
}