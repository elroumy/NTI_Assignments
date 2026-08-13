#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int first_array[100];
    int second_array[100];
    int merged_array[200];
    int first_size;
    int second_size;
    int merged_size;
    int first_position;
    int second_position;
    int merged_position;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter size of first array: ");
        scanf("%d", &first_size);

        printf("Enter first sorted array:\n");

        count = 0;
        while (count < first_size) {
            scanf("%d", &first_array[count]);
            count++;
        }

        printf("Enter size of second array: ");
        scanf("%d", &second_size);

        printf("Enter second sorted array:\n");

        count = 0;
        while (count < second_size) {
            scanf("%d", &second_array[count]);
            count++;
        }

        first_position = 0;
        second_position = 0;
        merged_position = 0;

        while (first_position < first_size && second_position < second_size) {
            if (first_array[first_position] < second_array[second_position]) {
                merged_array[merged_position] = first_array[first_position];
                first_position++;
            } else {
                merged_array[merged_position] = second_array[second_position];
                second_position++;
            }
            merged_position++;
        }

        while (first_position < first_size) {
            merged_array[merged_position] = first_array[first_position];
            first_position++;
            merged_position++;
        }

        while (second_position < second_size) {
            merged_array[merged_position] = second_array[second_position];
            second_position++;
            merged_position++;
        }

        merged_size = first_size + second_size;

        printf("\nMerged array:\n");

        count = 0;
        while (count < merged_size) {
            printf("%d ", merged_array[count]);
            count++;
        }

        printf("\n\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}