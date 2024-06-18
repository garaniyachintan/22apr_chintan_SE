#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    result = (operator == '+') ? (num1 + num2) :
             (operator == '-') ? (num1 - num2) :
             (operator == '*') ? (num1 * num2) :
             (operator == '/') ? (num2 != 0 ? num1 / num2 : -9999999) :
             (operator == '%') ? (num2 != 0 ? (int)num1 % (int)num2 : -9999999) :
             -9999999;

    if (result == -9999999) {
        printf("Error! Invalid operator or division by zero.\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}


