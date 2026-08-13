#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int numbers[100];
    int number_count;
    int largest;
    int second_largest;
    int temporary;
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

        largest = numbers[0];
        second_largest = numbers[1];

        if (second_largest > largest) {
            temporary = largest;
            largest = second_largest;
            second_largest = temporary;
        }

        count = 2;
        while (count < number_count) {
            if (numbers[count] > largest) {
                second_largest = largest;
                largest = numbers[count];
            } else if (numbers[count] > second_largest && numbers[count] != largest) {
                second_largest = numbers[count];
            }
            count++;
        }

        printf("\nLargest element = %d\n", largest);
        printf("Second largest element = %d\n", second_largest);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}