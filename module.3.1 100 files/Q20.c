#include <stdio.h>

float calculateInsurancePremium(float salary){
    return 0.10 * salary;
}

float calculateLoanInstallment(float remainingSalary){
    return 0.10 * remainingSalary;
}

int main(){
    float monthlySalary, remainingSalary, insurancePremium, loanInstallment;

    printf("enter your monthly salary:");
    scanf("%f",&monthlySalary);

    insurancePremium = calculateInsurancePremium(monthlySalary);
    printf("insurance premium(10%%):$%.2f\n",insurancePremium);

    remainingSalary = monthlySalary - insurancePremium;

    loanInstallment = calculateLoanInstallment(remainingSalary);
    printf("loan installment(10%% of remaining salary):$%.2f\n",loanInstallment);

    remainingSalary -= loanInstallment;

    printf("remaining salary after deductions:$%.2f\n",remainingSalary);

    return 0;
}

