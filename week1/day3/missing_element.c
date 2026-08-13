#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int numbers[100];
    int number_count;
    int array_sum = 0;
    int expected_sum;
    int missing_element;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter size of array: ");
        scanf("%d", &number_count);

        printf("Enter elements into array:\n");

        array_sum = 0;
        count = 0;

        while (count < number_count) {
            scanf("%d", &numbers[count]);
            array_sum = array_sum + numbers[count];
            count++;
        }

        expected_sum = (number_count + 1) * (number_count + 2) / 2;
        missing_element = expected_sum - array_sum;

        printf("\nMissing element is : %d\n", missing_element);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}