#include<stdio.h>

int main(){
int week_number;

    printf("enter the week number(1-7):");
    scanf("%d",&week_number);

    switch(week_number){
        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wednesday\n");
            break;
        case 4:
            printf("thursday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("saturday\n");
            break;
        case 7:
            printf("sunday\n");
            break;
        default:
            printf("invalid week number.Week number should be between 1 and 7\n");
            break;
    }

    return 0;
}

