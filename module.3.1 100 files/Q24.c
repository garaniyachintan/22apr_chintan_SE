#include<stdio.h>

int main(){
    char names[5][50];
    float salaries[5];
    float totalSalary=0,averageSalary;

    printf("enter names and salaries of 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("enter name of employee %d:",i+1);
        scanf("%s",names[i]);
        printf("enter salary of employee %d:",i+1);
        scanf("%f",&salaries[i]);
        totalSalary+=salaries[i];
    }

    averageSalary=totalSalary /5.0;
    
    printf("\nTotal Salary:$%.2f\n",totalSalary);
    printf("Average Salary:$%.2f\n",averageSalary);
    
    return 0;
}

