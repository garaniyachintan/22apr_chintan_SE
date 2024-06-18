#include <stdio.h>

float calculateAnnualSalary(float monthlySalary) {
    return monthlySalary * 12;
}

int main() {
    float monthlySalary, annualSalary;
    
    printf("enter your monthly salary:");
    scanf("%f",&monthlySalary);
    
    annualSalary=calculateAnnualSalary(monthlySalary);
    
    printf("our annual salary is: $%.2f\n",annualSalary);
    
    return 0;
}

