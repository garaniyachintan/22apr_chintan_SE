#include <stdio.h>

int main(){
    int num1, num2;
    
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    printf("after swapping:\n");
    printf("first number:%d\n",num1);
    printf("second number:%d\n",num2);
    
    return 0;
}

