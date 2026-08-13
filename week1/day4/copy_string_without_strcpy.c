#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    char original_text[200];
    char copied_text[200];
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter a string: ");
        scanf(" %[^\n]", original_text);

        count = 0;

        while (original_text[count] != '\0') {
            copied_text[count] = original_text[count];
            count++;
        }

        copied_text[count] = '\0';

        printf("\nCopied string:\n");
        printf("%s\n", copied_text);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}