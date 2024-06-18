#include <stdio.h>

int main() {
    float side1, side2, side3, perimeter;

    printf("enter the length of side1: ");
    scanf("%f",&side1);
    printf("enter the length of side2: ");
    scanf("%f",&side2);
    printf("enter the length of side3: ");
    scanf("%f",&side3);

    perimeter = side1 + side2 + side3;

    printf("perimeter of the triangle is: %.2f\n",perimeter);

    return 0;
}

