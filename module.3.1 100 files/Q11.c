#include <stdio.h>

int main() {
    float side, circumference;

    printf("enter the side length of the square:");
    scanf("%f",&side);

    circumference = 4 * side;

    printf("Circumference of the square is: %.2f\n",circumference);

    return 0;
}

