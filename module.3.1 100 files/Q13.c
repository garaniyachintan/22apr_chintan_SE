#include <stdio.h>

int main() {
    int ascii_value;

    printf("enter an ASCII value(0 to 127):");
    scanf("%d",&ascii_value);

    char character = ascii_value;

    printf("character corresponding to ASCII value %d is: %c\n",ascii_value,character);

    return 0;
}

