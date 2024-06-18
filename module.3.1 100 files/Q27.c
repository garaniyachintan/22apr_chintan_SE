#include<stdio.h>

void convertDaysToMonths(int days){
    int months,remainingDays;
    
    months=days /30;
    remainingDays=days%30;
    
    printf("%d days is approximately %d months and %d days.\n",days, months, remainingDays);
}

int main(){
    int days;

    printf("enter number of days:");
    scanf("%d",&days);
    
    convertDaysToMonths(days);
    
    return 0;
}

