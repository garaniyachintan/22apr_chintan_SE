#include<stdio.h>

int main(){
int month_number;

    printf("enter month number(1-12):");
    scanf("%d",&month_number);

    switch(month_number){
        case 1:
            printf("january\n");
            break;
        case 2:
            printf("february\n");
            break;
        case 3:
            printf("march\n");
            break;
        case 4:
            printf("april\n");
            break;
        case 5:
            printf("may\n");
            break;
        case 6:
            printf("june\n");
            break;
        case 7:
            printf("july\n");
            break;
        case 8:
            printf("august\n");
            break;
        case 9:
            printf("september\n");
            break;
        case 10:
            printf("october\n");
            break;
        case 11:
            printf("november\n");
            break;
        case 12:
            printf("december\n");
            break;
        default:
            printf("invalid month number.month number should be between 1 and 12\n");
            break;
    }

    return 0;
}

