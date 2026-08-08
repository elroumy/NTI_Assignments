#include <stdio.h>

int main() {
    float costPrice;
    float sellingPrice;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        printf("Profit = %.2f\n", sellingPrice - costPrice);
    } else if (costPrice > sellingPrice) {
        printf("Loss = %.2f\n", costPrice - sellingPrice);
    } else {
        printf("No profit and no loss\n");
    }

    return 0;
}