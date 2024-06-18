#include<stdio.h>

int main(){
    float height;
    
    printf("enter height in centimeters:");
    scanf("%f",&height);
    
    if(height<150){
        printf("the person is short.\n");
    } else if(height>=150&&height<170){
        printf("the person is average.\n");
    } else if(height>= 170&&height<190){
        printf("the person is tall.\n");
    } else{
        printf("the person is very tall.\n");
    }
    
    return 0;
}

