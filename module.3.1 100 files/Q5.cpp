#include<stdio.h>
float surfaceArea(float sideLength) {
    return 6 * sideLength * sideLength;
}

int main() {
    float side;
    
    
    printf("enter the length of a side of the cube: ");
    scanf("%f", &side);
    
    printf("surface Area of the cube: %.2f\n", surfaceArea(side));
    
    return 0;
}

