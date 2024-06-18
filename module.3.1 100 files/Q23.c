#include <stdio.h>

int main(){
    float num1, num2;
    
    printf("enter first number:");
    scanf("%f",&num1);
    printf("enter second number:");
    scanf("%f",&num2);
    
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    
    printf("after swapping:\n");
    printf("first number:%.2f\n",num1);
    printf("second number:%.2f\n",num2);
    
    return 0;
}


