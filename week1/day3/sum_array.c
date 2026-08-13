#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int numbers[100];
    int number_count;
    int sum = 0;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter size of array: ");
        scanf("%d", &number_count);

        printf("Enter elements into array:\n");

        sum = 0;
        count = 0;
        while (count < number_count) {
            scanf("%d", &numbers[count]);
            sum = sum + numbers[count];
            count++;
        }

        printf("\nSum of array elements = %d\n", sum);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}