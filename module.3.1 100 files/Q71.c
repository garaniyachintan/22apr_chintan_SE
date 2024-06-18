#include<stdio.h>

int main(){
int number,first_digit,last_digit,sum;

    printf("enter number:");
    scanf("%d",&number);

    first_digit=number;
    while(first_digit>=10){
        first_digit/=10;
    }

    last_digit=number%10;
    sum=first_digit+last_digit;

    printf("sum of first and last digits:%d\n",sum);

    return 0;
}

