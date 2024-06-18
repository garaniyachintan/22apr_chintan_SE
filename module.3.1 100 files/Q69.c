#include<stdio.h>

int main(){
int number,max_digit=0,digit;

    printf("enter number:");
    scanf("%d",&number);

    if(number<0)
        number=-number;

    while(number>0){
        digit=number%10;
        if(digit>max_digit)
            max_digit=digit;
        number/=10;
    }

    printf("max number is %d\n",max_digit);

    return 0;
}

