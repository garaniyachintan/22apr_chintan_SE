#include<stdio.h>

int main(){
int number,reverse=0,remainder;

    printf("enter number:");
    scanf("%d",&number);

    while(number!=0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number/=10;
    }

    printf("reversed number:%d\n",reverse);

    return 0;
}

