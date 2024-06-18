#include<stdio.h>
float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height;
    
    printf("enter the base of the triangle: ");
    scanf("%f", &base);
    printf("enter the height of the triangle: ");
    scanf("%f", &height);
    
    printf("area of the triangle: %.2f\n", triangleArea(base, height));
    
    return 0;
}

