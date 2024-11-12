#include <stdio.h>

int main() {
	
    float BaseSalary, HRA, DA, TA, grossSalary;
    
    
    printf("Enter the base salary: ");
    scanf("%f", &BaseSalary);

    printf("Enter the HRA percentage: ");
    scanf("%f", &HRA);

    printf("Enter the DA percentage: ");
    scanf("%f", &DA);

    printf("Enter the TA percentage: ");
    scanf("%f", &TA);
 
    grossSalary = BaseSalary + (BaseSalary*HRA/100) + (BaseSalary*DA/100) + (BaseSalary*TA/100); ;

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    return 0;
}

