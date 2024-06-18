#include<stdio.h>

int main(){
int numbers[5];
int i;

    printf("enter 5 numbers:\n");
    for(i=0;i<5;i++){
        printf("number %d:",i+1);
        scanf("%d",&numbers[i]);
    }

    printf("numbers entered by the user:\n");
    for(i=0;i<5;i++){
        printf("%d",numbers[i]);
    }
    printf("\n");

    return 0;
}

