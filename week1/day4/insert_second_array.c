#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;

    int first_array[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int second_array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int first_size = 10;
    int second_size = 10;
    int first_position;
    int second_position;
    int result_position;
    int result_array[20];
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        first_position = 0;
        second_position = 0;
        result_position = 0;

        while (first_position < first_size && second_position < second_size) {
            if (first_array[first_position] < second_array[second_position]) {
                result_array[result_position] = first_array[first_position];
                first_position++;
            } else {
                result_array[result_position] = second_array[second_position];
                second_position++;
            }
            result_position++;
        }

        while (first_position < first_size) {
            result_array[result_position] = first_array[first_position];
            first_position++;
            result_position++;
        }

        while (second_position < second_size) {
            result_array[result_position] = second_array[second_position];
            second_position++;
            result_position++;
        }

        printf("Result:\n");

        count = 0;
        while (count < first_size + second_size) {
            printf("%d ", result_array[count]);
            count++;
        }

        printf("\n\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}