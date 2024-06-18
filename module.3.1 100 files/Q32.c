#include<stdio.h>

int main(){
    int num1, num2, sum;
    
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    
    sum=num1+num2;
    
    printf("sum of %d and %d is:%d\n",num1, num2, sum);

    if (sum >= -2147483648 && sum <= 2147483647) {
        printf("size of sum is within the range of int.\n");
    } else{
        printf("size of sum is out of range of int.\n");
    }
    
    return 0;
}

