#include<stdio.h>

int main(){
    int num1, num2;
    
    printf("enter first integer:");
    scanf("%d",&num1);
    printf("enter second integer:");
    scanf("%d",&num2);
    
    if(num1 == num2){
        printf("the two integers are equal.\n");
    } else {
        printf("the two integers are not equal.\n");
    }
    
    return 0;
}

