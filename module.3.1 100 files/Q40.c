#include<stdio.h>

int main(){
    float marks;
    
    printf("enter marks:");
    scanf("%f",&marks);
    
    if(marks>=40.0){
        printf("congratulations! you have passed.\n");
    } else{
        printf("sorry! you have failed.\n");
    }
    
    return 0;
}

