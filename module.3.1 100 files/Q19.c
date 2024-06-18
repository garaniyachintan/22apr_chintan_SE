#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time) {
    float compoundInterest;
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;
    return compoundInterest;
}

int main(){
    float principal, rate, compoundInterest;
    int time;
    
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interest(in percentage):");
    scanf("%f",&rate);
    printf("enter time period(in years):");
    scanf("%d",&time);
    
    compoundInterest=calculateCompoundInterest(principal, rate, time);
    
    printf("compound interest is:$%.2f\n",compoundInterest);
    
    return 0;
}

