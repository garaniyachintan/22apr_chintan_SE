#include<stdio.h>

void abbreviate(char *name) {
    int i = 0;
    while (name[i] != '\0') {
    	
        if (i == 0 && name[i] >= 'a' && name[i] <='z')
            name[i] = name[i] - 32;
        
        if (name[i] == ' ') {
            
            if (name[i + 1] >= 'a' && name[i + 1] <='z')
                name[i + 1] = name[i + 1] - 32;
           
            printf("%c.", name[i + 1]);
        }
        i++;
    }
}

int main() {
    char schoolName[] = "example high school";
    
    printf("school name: %s\n",schoolName);
    printf("abbreviated form:");
    abbreviate(schoolName);
    
    return 0;
}

