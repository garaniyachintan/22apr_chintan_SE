#include<stdio.h>

int main(){
int number;
unsigned long long factorial=1;
int i=1;

    printf("enter a number:");
    scanf("%d",&number);

    while(i<=number){
        factorial*=i;
        i++;
    }

    printf("factorial of %d=%llu\n",number,factorial);

    return 0;
}

