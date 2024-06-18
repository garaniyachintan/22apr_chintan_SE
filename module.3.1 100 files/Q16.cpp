#include <stdio.h>

void abbreviateCountry(char *country) {
    int i = 0;
 
    if (country[i] >= 'a' && country[i] <= 'z')
        country[i] -= 32; // 

   
    while (country[i] != '\0') {    
        if (country[i] == ' ') {
          
            if (country[i + 1 >='a'&&country[i + 1]<='z')
                country[i + 1]-= 32; 
            printf("%c", country[i + 1]);
        }
        i++;
    }
    printf("\n");
}

int main() {
    char country[] ="united states of america";

    printf("country name: %s\n",country);
    printf("abbreviated form:");
    abbreviateCountry(country);

    return 0;
}

