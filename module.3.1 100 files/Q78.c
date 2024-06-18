#include<stdio.h>

int main(){
int number,even_count=0,odd_count=0;
    inti=1;

    printf("enter 5 numbers:\n");

    while(i<=5){
        printf("number %d:",i);
        scanf("%d",&number);

        if(number%2==0)
            even_count++;
        else
            odd_count++;

        i++;
    }

    printf("number of even numbers:%d\n",even_count);
    printf("number of odd numbers:%d\n",odd_count);

    return 0;
}

