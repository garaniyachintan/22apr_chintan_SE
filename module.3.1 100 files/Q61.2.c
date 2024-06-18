#include<stdio.h>

int main(){
char ch;

    printf("enter character:");
    scanf("%c",&ch);

    ch=tolower(ch);

    switch(ch){
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
            printf("%c is a vowel\n",ch);
            break;
        default:
            printf("%c is a consonant\n",ch);
            break;
    }

    return 0;
}

