#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    char first_text[200];
    char second_text[200];
    char combined_text[400];
    int count = 0;
    int combined_count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter first string: ");
        scanf(" %[^\n]", first_text);

        printf("Enter second string: ");
        scanf(" %[^\n]", second_text);

        count = 0;
        combined_count = 0;

        while (first_text[count] != '\0') {
            combined_text[combined_count] = first_text[count];
            combined_count++;
            count++;
        }

        count = 0;

        while (second_text[count] != '\0') {
            combined_text[combined_count] = second_text[count];
            combined_count++;
            count++;
        }

        combined_text[combined_count] = '\0';

        printf("\nConcatenated string:\n");
        printf("%s\n", combined_text);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}