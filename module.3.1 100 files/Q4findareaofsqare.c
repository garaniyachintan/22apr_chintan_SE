#include<stdio.h>
int main() {
    float side, area;

    printf("enter the length of one side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("area of the square: %.2f\n", area);

    return 0;
}

