#include <stdio.h>

int main() {
    char character;
    
    printf("enter a character:");
    scanf("%c", &character);
    
    printf("ASCII value of '%c' is: %d\n",character,character);
    
    return 0;
}

