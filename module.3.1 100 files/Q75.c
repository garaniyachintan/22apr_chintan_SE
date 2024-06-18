#include<stdio.h>

int factorial(int n){
    if(n==0)
        return1;
    else
        return n*factorial(n-1);
}

int main(){
int numbers[5];
int i;

    printf("enter 5 numbers:\n");
    for(i=0;i<5;i++){
        printf("number %d:",i+1);
        scanf("%d",&numbers[i]);
    }

    printf("\nfactorials of the entered numbers:\n");
    for(i=0;i<5;i++){
        printf("factorial of %d:%d\n",numbers[i],factorial(numbers[i]));
    }

    return 0;
}

