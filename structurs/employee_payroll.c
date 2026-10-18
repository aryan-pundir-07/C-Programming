#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float grossSalary;
};

int main() {
    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%49s", emp.name);
    printf("Enter basic salary: ");
    scanf("%f", &emp.basicSalary);
    printf("Enter allowance: ");
    scanf("%f", &emp.allowance);

    emp.grossSalary = emp.basicSalary + emp.allowance;

    printf("\nEmployee Payroll Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Basic Salary: %.2f\n", emp.basicSalary);
    printf("Allowance: %.2f\n", emp.allowance);
    printf("Gross Salary: %.2f\n", emp.grossSalary);

    return 0;
}
