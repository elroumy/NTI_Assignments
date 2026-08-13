#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    char text[200];
    int length = 0;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter a string: ");
        scanf(" %[^\n]", text);

        length = 0;
        count = 0;

        while (text[count] != '\0') {
            length++;
            count++;
        }

        printf("\nLength of string = %d\n", length);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}