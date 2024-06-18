#include <stdio.h>

void convertYearsToDaysMonths(int years){
    int days, months, remainingDays;
    
    days=years * 365;
    
    months=days/ 30;
    remainingDays=days% 30;
    
    printf("%d years is approximately %d months and %d days.\n",years, months, remainingDays);
}

int main(){
    int years;
    
    printf("enter number of years:");
    scanf("%d",&years);
    
    convertYearsToDaysMonths(years);
    
    return 0;
}

