#include<stdio.h>

float rectangleCircumference(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float length, width;
    
    printf("enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("enter the width of the rectangle: ");
    scanf("%f", &width);
    
    printf("circumference of the rectangle: %.2f\n", rectangleCircumference(length, width));
    
    return 0;
}

