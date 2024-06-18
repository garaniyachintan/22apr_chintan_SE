#include <stdio.h>

float calculatePremium(float salary) {
    float premium;
    
    if (salary<=10000)
        premium=0.05 * salary;
    else if (salary<=50000)
        premium = 0.1 * salary;
    else
        premium = 0.2 * salary;
    
    return premium;
}

int main(){
    float salary, premium;
    
    printf("enter your annual salary:");
    scanf("%f", &salary);
    
    premium = calculatePremium(salary);
    
    printf("your insurance premium is:$%.2f\n",premium);
    
    return 0;
}

