#include <stdio.h>
#include <stdlib.h>

int main() {
    char programstate = 0;
    int age;
    int baby_count = 0;
    int school_count = 0;
    int adult_count = 0;
    int count = 0;

    do {
        system("cls");
        printf("Welcome to my program\n");

        baby_count = 0;
        school_count = 0;
        adult_count = 0;
        count = 0;

        while (count < 15) {
            printf("Enter age of person %d: ", count + 1);
            scanf("%d", &age);

            if (age >= 0 && age <= 5) {
                baby_count++;
            } else if (age >= 6 && age <= 17) {
                school_count++;
            } else if (age >= 18) {
                adult_count++;
            }

            count++;
        }

        printf("\nStill a baby = %d\n", baby_count);
        printf("Attending school = %d\n", school_count);
        printf("Adult life = %d\n", adult_count);

        printf("\nDo you want to exit? (e/E) otherwise continue: ");
        scanf(" %c", &programstate);
    } while (programstate != 'E' && programstate != 'e');

    return 0;
}