#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int first_array[100];
    int second_array[100];
    int merged_array[200];
    int array_size;
    int merged_size;
    int first_position;
    int second_position;
    int merged_position;
    float median;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter size of both arrays: ");
        scanf("%d", &array_size);

        printf("Enter first sorted array:\n");

        count = 0;
        while (count < array_size) {
            scanf("%d", &first_array[count]);
            count++;
        }

        printf("Enter second sorted array:\n");

        count = 0;
        while (count < array_size) {
            scanf("%d", &second_array[count]);
            count++;
        }

        first_position = 0;
        second_position = 0;
        merged_position = 0;

        while (first_position < array_size && second_position < array_size) {
            if (first_array[first_position] < second_array[second_position]) {
                merged_array[merged_position] = first_array[first_position];
                first_position++;
            } else {
                merged_array[merged_position] = second_array[second_position];
                second_position++;
            }
            merged_position++;
        }

        while (first_position < array_size) {
            merged_array[merged_position] = first_array[first_position];
            first_position++;
            merged_position++;
        }

        while (second_position < array_size) {
            merged_array[merged_position] = second_array[second_position];
            second_position++;
            merged_position++;
        }

        merged_size = array_size * 2;

        if (merged_size % 2 == 0) {
            median = (merged_array[merged_size / 2 - 1] +
                      merged_array[merged_size / 2]) / 2.0;
        } else {
            median = merged_array[merged_size / 2];
        }

        printf("\nMerged array:\n");

        count = 0;
        while (count < merged_size) {
            printf("%d ", merged_array[count]);
            count++;
        }

        printf("\nMedian = %.2f\n", median);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}