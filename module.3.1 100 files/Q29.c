#include <stdio.h>

void convertMinutesToSecondsHours(int minutes){
    int hours, seconds, remainingMinutes;
    
    seconds=minutes *60;
    
    hours=minutes /60;
    remainingMinutes=minutes %60;
    
    printf("%d minutes is equal to %d hours, %d minutes, and %d seconds.\n",minutes, hours, remainingMinutes, seconds);
}

int main(){
    int minutes;
    
    printf("enter number of minutes:");
    scanf("%d",&minutes);
    
    convertMinutesToSecondsHours(minutes);
    
    return 0;
}

