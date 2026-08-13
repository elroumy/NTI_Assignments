#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int numbers[100];
    int number_count;
    int position;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter size of array: ");
        scanf("%d", &number_count);

        printf("Enter elements into array:\n");

        count = 0;
        while (count < number_count) {
            scanf("%d", &numbers[count]);
            count++;
        }

        printf("Enter position to delete: ");
        scanf("%d", &position);

        if (position >= 0 && position < number_count) {
            count = position;

            while (count < number_count - 1) {
                numbers[count] = numbers[count + 1];
                count++;
            }

            number_count--;

            printf("\nArray after deletion:\n");

            count = 0;
            while (count < number_count) {
                printf("%d ", numbers[count]);
                count++;
            }
        } else {
            printf("\nDeletion is not possible.\n");
        }

        printf("\n\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}