#include<stdio.h>

int main(){
int month_number,days_in_month;

    printf("enter month number(1-12):");
    scanf("%d",&month_number);

    switch(month_number){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            days_in_month=31;
            break;
        case 4:case 6:case 9:case 11:
            days_in_month=30;
            break;
        case 2:
            days_in_month=28;
            break;
        default:
            printf("invalid month number.month number should be between 1 and 12\n");
            return 1;
    }

    printf("number of days in month %d:%d\n",month_number,days_in_month);

    return 0;
}

