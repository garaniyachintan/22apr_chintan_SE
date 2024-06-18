#include<stdio.h>
#include<math.h>

float calculateCompoundInterest(float principal, float rate, int time){
    float amount;
    amount=principal * pow((1+rate/100),time);
    return amount;
}

int main(){
    float principal, rate, amount;
    int time;
    
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interest(in percentage):");
    scanf("%f",&rate);
    printf("enter time period(in years):");
    scanf("%d",&time);
    
    amount=calculateCompoundInterest(principal, rate, time);
    
    printf("amount after compound interest:$%.2f\n",amount);
    
    return 0;
}

