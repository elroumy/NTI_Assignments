#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    char text[200];
    char new_text[200];
    int count = 0;
    int new_count = 0;
    int previous_space = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter a string: ");
        scanf(" %[^\n]", text);

        count = 0;
        new_count = 0;
        previous_space = 0;

        while (text[count] != '\0') {
            if (text[count] != ' ') {
                new_text[new_count] = text[count];
                new_count++;
                previous_space = 0;
            } else if (previous_space == 0) {
                new_text[new_count] = ' ';
                new_count++;
                previous_space = 1;
            }
            count++;
        }

        if (new_count > 0 && new_text[new_count - 1] == ' ') {
            new_count--;
        }

        new_text[new_count] = '\0';

        printf("\nString after removing extra spaces:\n");
        printf("%s\n", new_text);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}