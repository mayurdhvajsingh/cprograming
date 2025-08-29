#include <stdio.h>

int main() {
    float basic_salary, allowance, deduction, net_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    allowance = 0.10 * basic_salary;   
    deduction = 0.03 * basic_salary;   

    net_salary = basic_salary + allowance - deduction;

    printf("Net Salary = %.2f\n", net_salary);

    return 0;
}
