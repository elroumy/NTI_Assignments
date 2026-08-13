#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    char text[200];
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int white_spaces = 0;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        printf("Enter a string: ");
        scanf(" %[^\n]", text);

        vowels = 0;
        consonants = 0;
        digits = 0;
        white_spaces = 0;
        count = 0;

        while (text[count] != '\0') {
            if (text[count] == 'a' || text[count] == 'e' ||
                text[count] == 'i' || text[count] == 'o' ||
                text[count] == 'u' || text[count] == 'A' ||
                text[count] == 'E' || text[count] == 'I' ||
                text[count] == 'O' || text[count] == 'U') {
                vowels++;
            } else if ((text[count] >= 'a' && text[count] <= 'z') ||
                       (text[count] >= 'A' && text[count] <= 'Z')) {
                consonants++;
            } else if (text[count] >= '0' && text[count] <= '9') {
                digits++;
            } else if (text[count] == ' ') {
                white_spaces++;
            }
            count++;
        }

        printf("\nVowels = %d\n", vowels);
        printf("Consonants = %d\n", consonants);
        printf("Digits = %d\n", digits);
        printf("White-spaces = %d\n", white_spaces);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}