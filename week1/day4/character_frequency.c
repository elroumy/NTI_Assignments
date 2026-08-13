#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    char text[200];
    char target_character;
    int frequency = 0;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter a string: ");
        scanf(" %[^\n]", text);

        printf("Enter a character: ");
        scanf(" %c", &target_character);

        frequency = 0;
        count = 0;

        while (text[count] != '\0') {
            if (text[count] == target_character) {
                frequency++;
            }
            count++;
        }

        printf("\nFrequency of '%c' = %d\n", target_character, frequency);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}