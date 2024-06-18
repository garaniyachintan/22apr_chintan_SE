#include<stdio.h>

int main(){
int number,sum=0,digit;

    printf("enter number:");
    scanf("%d",&number);

    if(number<0)
        number=-number;

    while(number!=0){
        digit=number%10;
        sum+=digit;
        number/=10;
    }

    printf("summation of digits:%d\n",sum);

    return 0;
}

