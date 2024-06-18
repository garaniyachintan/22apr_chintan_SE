#include <stdio.h>

int main() {
    int num_students;
    int total_apples;
 
    printf("enter the number of students:");
    scanf("%d",&num_students);

    total_apples = 5 * num_students;

    printf("total apples required: %d\n",total_apples);

    return 0;
}

