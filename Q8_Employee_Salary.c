?#include <stdio.h>

int main()
{
    float basicSalary, allowance, bonus, finalSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}