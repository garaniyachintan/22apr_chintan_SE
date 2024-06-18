#include <stdio.h>

int yearsToDays(int years){
    return years *365;
}
int daysToYears(int days) {
    return days /365;
}

int main(){
    int years,days;
    
    printf("enter number of years:");
    scanf("%d",&years);
    
    days=yearsToDays(years);
    
    printf("%d years is equal to %d days.\n",years,days);
    
    printf("enter number of days:");
    scanf("%d",&days);
    
    years=daysToYears(days);
    
    printf("%d days is equal to %d years.\n",days,years);
    
    return 0;
}

