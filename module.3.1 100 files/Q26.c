#include<stdio.h>

float fahrenheitToCelsius(float fahrenheit){
    return(fahrenheit-32) * 5/9;
}

int main(){
    float fahrenheit, celsius;
    
    printf("enter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
    
    celsius=fahrenheitToCelsius(fahrenheit);
    
    printf("temperature in Celsius:%.2f\n",celsius);
    
    return 0;
}

