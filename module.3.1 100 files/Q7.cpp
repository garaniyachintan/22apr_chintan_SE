#include<stdio.h>
float rectangleArea(float width, float length) {
    return width * length;
}

int main() {
    float width, length;
    
    printf("enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("area of the rectangle: %.2f\n", rectangleArea(width, length));
    
    return 0;
}

