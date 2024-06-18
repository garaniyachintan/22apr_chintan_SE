#include <stdio.h>

int main(){
    float expenses[5];
    float totalExpense=0,averageExpense;
    
    printf("enter 5 expenses:\n");
    for (int i = 0; i < 5; i++){
        printf("enter expense %d:",i+1);
        scanf("%f",&expenses[i]);
        totalExpense+=expenses[i];
    }
    
    averageExpense=totalExpense /5.0;
    
    printf("\naverage Expense:$%.2f\n",averageExpense);
    
    return 0;
}

