#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int numbers[100];
    int number_count;
    int positions;
    int rotation_count;
    int last_element;
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

        printf("Enter number of positions to rotate: ");
        scanf("%d", &positions);

        positions = positions % number_count;
        rotation_count = 0;

        while (rotation_count < positions) {
            last_element = numbers[number_count - 1];

            count = number_count - 1;
            while (count > 0) {
                numbers[count] = numbers[count - 1];
                count--;
            }

            numbers[0] = last_element;
            rotation_count++;
        }

        printf("\nArray after right rotation:\n");

        count = 0;
        while (count < number_count) {
            printf("%d ", numbers[count]);
            count++;
        }

        printf("\n\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}