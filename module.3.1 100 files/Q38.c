#include<stdio.h>

int main(){
    int number;
    
    printf("enter a number:");
    scanf("%d",&number);
    
    if(number>0){
        printf("%d is a positive number.\n",number);
    } else if(number<0){
        printf("%d is a negative number.\n",number);
    } else{
        printf("the number is zero, neither positive nor negative.\n");
    }
    
    return 0;
}

