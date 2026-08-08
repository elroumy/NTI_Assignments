#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (character == 'a' || character == 'e' || character == 'i' ||
        character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' ||
        character == 'O' || character == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}