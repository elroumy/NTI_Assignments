#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int numbers[100];
    int number_count;
    int even_count = 0;
    int odd_count = 0;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter size of array: ");
        scanf("%d", &number_count);

        even_count = 0;
        odd_count = 0;
        count = 0;

        printf("Enter elements into array:\n");

        while (count < number_count) {
            scanf("%d", &numbers[count]);

            if (numbers[count] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }

            count++;
        }

        printf("\nEven elements = %d\n", even_count);
        printf("Odd elements = %d\n", odd_count);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}