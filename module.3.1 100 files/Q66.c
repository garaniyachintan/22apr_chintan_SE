#include<stdio.h>

int main(){
int number,i;
unsigned long long factorial=1;

    printf("enter number:");
    scanf("%d",&number);

    for(i =1;i<=number;++i){
        factorial*=i;
    }

    printf("factorial of %d=%llu\n",number,factorial);

    return 0;
}

