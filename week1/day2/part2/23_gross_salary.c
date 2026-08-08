#include <stdio.h>

int main() {
    float basicSalary;
    float HouseRentAllowance;
    float dearnessAllowance;
    float grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        HouseRentAllowance = basicSalary * 0.20;
        dearnessAllowance = basicSalary * 0.80;
    } else if (basicSalary <= 20000) {
        HouseRentAllowance  = basicSalary * 0.25;
        dearnessAllowance = basicSalary * 0.90;
    } else {
        HouseRentAllowance = basicSalary * 0.30;
        dearnessAllowance = basicSalary * 0.95;
    }

    grossSalary = basicSalary + HouseRentAllowance + dearnessAllowance;

    printf("Gross salary = %.2f\n", grossSalary);

    return 0;
}