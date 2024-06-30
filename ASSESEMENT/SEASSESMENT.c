#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverseString(char str[]);
void concatenateStrings(char str1[],char str2[]);
int isPalindrome(char str[]);
void copyString(char source[],char destination[]);
int stringLength(char str[]);
int countFrequency(char str[],char ch);
void countVowelsAndConsonants(char str[],int*vowels,int*consonants);
void countDigitsAndSpaces(char str[],int*digits,int*spaces);

int main(){
char inputStr[100],inputStr2[100];
int choice;
char ch;
int vowels,consonants,digits,spaces;
    
    do {
	
        printf("\n\nstring operations menu:\n");
        printf("1.reverse a string\n");
        printf("2.concatenate two strings\n");
        printf("3.check if palindrome\n");
        printf("4.copy a string\n");
        printf("5.length of the string\n");
        printf("6.frequency of a character\n");
        printf("7.count vowels and consonants\n");
        printf("8.count digits and spaces\n");
        printf("9.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        
        switch (choice){
            case 1:
                printf("enter a string to reverse:");
                scanf("%[^\n]s",inputStr);
                reverseString(inputStr);
                break;
            case 2:
                printf("enter first string:");
                scanf("%[^\n]s",inputStr);
                printf("enter second string:");
                scanf("%[^\n]s",inputStr2);
                concatenateStrings(inputStr,inputStr2);
                break;
            case 3:
                printf("enter a string to check palindrome:");
                scanf("%[^\n]s",inputStr);
                if(isPalindrome(inputStr))
                    printf("%s is a palindrome\n",inputStr);
                else
                    printf("%s is not a palindrome\n",inputStr);
                break;
            case 4:
                printf("enter a string to copy:");
                scanf("%[^\n]s",inputStr);
                copyString(inputStr,inputStr2);
                printf("Copied string: %s\n",inputStr2);
                break;
            case 5:
                printf("enter a string to find length:");
                scanf("%[^\n]s",inputStr);
                printf("length of the string:%d\n",stringLength(inputStr));
                break;
            case 6:
                printf("enter a string to find frequency of character:");
                scanf("%[^\n]s",inputStr);
                printf("enter character to find frequency:");
                scanf("%c",&ch);
                printf("frequency of '%c' in the string:%d\n",ch,countFrequency(inputStr,ch));
                break;
            case 7:
                printf("enter a string to count vowels and consonants:");
                scanf("%[^\n]s",inputStr);
                countVowelsAndConsonants(inputStr,&vowels,&consonants);
                printf("vowels:%d,Consonants:%d\n",vowels,consonants);
                break;
            case 8:
                printf("enter a string to count digits and spaces:");
                scanf("%[^\n]s",inputStr);
                countDigitsAndSpaces(inputStr,&digits,&spaces);
                printf("digits:%d,spaces:%d\n",digits,spaces);
                break;
            case 9:
                printf("exiting\n");
                return 0;
            default:
                printf("invalid choice.Please enter a number between 1to9\n");
                break;
        }
        
        printf("\ndo you want to continue(yes/no)");
        scanf("%c",&ch);
    } while(tolower(ch)=='y');
    
    return 0;
}

void reverseString(char str[]){
int len=strlen(str);
    for(int i=len-1;i>=0;--i){
        printf("%c",str[i]);
    }
    printf("\n");
}

void concatenateStrings(char str1[],char str2[]){
    strcat(str1,str2);
    printf("concatenated string:%s\n",str1);
}

int isPalindrome(char str[]){
int len=strlen(str);
    for (int i=0;i<len/2;++i){
        if(str[i]!=str[len-1-i])
            return 0;
    }
    return 1;
}

void copyString(char source[],char destination[]){
    strcpy(destination,source);
}

int stringLength(char str[]){
    return strlen(str);
}

int countFrequency(char str[],char ch){
int count=0;
int len=strlen(str);
    for(int i=0;i<len;++i){
        if(str[i]==ch)
            count++;
    }
    return count;
}

void countVowelsAndConsonants(char str[],int*vowels,int*consonants){
    *vowels =0;
    *consonants=0;
int len=strlen(str);
    for(int i=0;i<len;++i){
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

void countDigitsAndSpaces(char str[],int*digits,int*spaces){
    *digits=0;
    *spaces=0;
    int len=#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverseString(char str[]);
void concatenateStrings(char str1[],char str2[]);
int isPalindrome(char str[]);
void copyString(char source[],char destination[]);
int stringLength(char str[]);
int countFrequency(char str[],char ch);
void countVowelsAndConsonants(char str[],int*vowels,int*consonants);
void countDigitsAndSpaces(char str[],int*digits,int*spaces);

int main(){
char inputStr[100],inputStr2[100];
int choice;
char ch;
int vowels,consonants,digits,spaces;
    
    do {
        printf("\n\nstring operations,menu:\n");
        printf("1.reverse a string\n");
        printf("2.concatenate two strings\n");
        printf("3.check if palindrome\n");
        printf("4.copy a string\n");
        printf("5.length of the string\n");
        printf("6.frequency of a character\n");
        printf("7.count vowels and consonants\n");
        printf("8.count digits and spaces\n");
        printf("9.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("enter a string to reverse:");
                scanf("%[^\n]s",inputStr);
                reverseString(inputStr);
                break;
            case 2:
                printf("enter first string:");
                scanf("%[^\n]s",inputStr);
                printf("enter second string:");
                scanf("%[^\n]s",inputStr2);
                concatenateStrings(inputStr,inputStr2);
                break;
            case 3:
                printf("enter a string to check palindrome:");
                scanf("%[^\n]s",inputStr);
                if(isPalindrome(inputStr))
                    printf("%s is a palindrome.\n",inputStr);
                else
                    printf("%s is not a palindrome\n",inputStr);
                break;
            case 4:
                printf("enter a string to copy:");
                scanf("%[^\n]s",inputStr);
                copyString(inputStr,inputStr2);
                printf("copied string:%s\n",inputStr2);
                break;
            case 5:
                // Length of the string
                printf("Enter a string to find length: ");
                scanf(" %[^\n]s", inputStr);
                printf("Length of the string: %d\n", stringLength(inputStr));
                break;
            case 6:
                printf("enter a string to find frequency of character:");
                scanf("%[^\n]s",inputStr);
                printf("enter character to find frequency:");
                scanf("%c",&ch);
                printf("frequency of'%c'in the string:%d\n",ch,countFrequency(inputStr,ch));
                break;
            case 7:
                printf("enter a string to count vowels and consonants:");
                scanf("%[^\n]s",inputStr);
                countVowelsAndConsonants(inputStr,&vowels,&consonants);
                printf("vowels:%d,consonants:%d\n",vowels,consonants);
                break;
            case 8:
                printf("enter a string to count digits and spaces:");
                scanf("%[^\n]s",inputStr);
                countDigitsAndSpaces(inputStr,&digits,&spaces);
                printf("digits:%d,spaces:%d\n",digits,spaces);
                break;
            case 9:
                printf("exiting\n");
                return 0;
            default:
                printf("invalid choice. please enter a number between 1 to 9\n");
                break;
        }
        
        printf("\ndo you want to continue(yes/no)?");
        scanf("%c",&ch);
    } while(tolower(ch)=='y');
    
    return 0;
}

void reverseString(char str[]){
int len=strlen(str);
    for(int i=len-1;i>=0;--i){
        printf("%c",str[i]);
    }
    printf("\n");
}

void concatenateStrings(char str1[],char str2[]){
    strcat(str1,str2);
    printf("Concatenated string:%s\n",str1);
}

int isPalindrome(char str[]){
int len=strlen(str);
    for(int i=0;i<len/2;++i){
        if(str[i]!=str[len-1-i])
            return 0;
    }
    return 1;
}

void copyString(char source[],char destination[]){
    strcpy(destination,source);
}

int stringLength(char str[]){
    return strlen(str);
}

int countFrequency(char str[],char ch){
    int count=0;
    int len=strlen(str);
    for(int i=0;i<len;++i){
        if(str[i]==ch)
            count++;
    }
    return count;
}

void countVowelsandconsonants(char str[],int*vowels,int*consonants){
    *vowels=0;
    *consonants=0;
int len=strlen(str);
    for(int i=0;i<len;++i){
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}
void countDigitsAndSpaces(char str[],int*digits,int*spaces){
    *digits=0;
    *spaces=0;
int len=strlen(str);
    for(int i=0;i<len;++i){
        if(isdigit(str[i]))
            (*digits)++;
        else if(isspace(str[i]))
            (*spaces)++;
    }
}
 trlen(str);
    for(int i=0;i<len;++i){
        if(isdigit(str[i]))
            (*digits)++;
        else if(isspace(str[i]))
            (*spaces)++;
    }
}

