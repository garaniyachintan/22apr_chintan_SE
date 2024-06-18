#include<stdio.h>

int main(){
int sum=0;
int count=1;
int number;

    printf("enter 10 number:\n");

    while(count<=10){
        printf("number %d:",count);
        scanf("%d",&number);
        sum+=number;
        count++;
    }

    printf("sum of the 10 number:%d\n",sum);

    return 0;
}

