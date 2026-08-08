#include <stdio.h>

int main() {
    float number1;
    float number2;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%f", &number2);

    switch (operation) {
        case '+':
            printf("Result = %.2f\n", number1 + number2);
            break;

        case '-':
            printf("Result = %.2f\n", number1 - number2);
            break;

        case '*':
            printf("Result = %.2f\n", number1 * number2);
            break;

        case '/':
            if (number2 != 0) {
                printf("Result = %.2f\n", number1 / number2);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;

        default:
            printf("Invalid operation\n");
    }

    return 0;
}