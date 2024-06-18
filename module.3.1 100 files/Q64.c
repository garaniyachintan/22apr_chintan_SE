#include<stdio.h>

int main(){
int numbers[10];
int even_count=0,odd_count=0;
int even_sum=0,odd_sum=0;
int i;

    printf("enter 10 numbers:\n");
    for(i=0;i<10;i++){
        printf("number %d:",i+1);
        scanf("%d",&numbers[i]);
    }

    for(i=0;i<10;i++){
        if (numbers[i]%2==0){
            even_count++;
            even_sum+=numbers[i];
        } else{
            odd_count++;
            odd_sum+=numbers[i];
        }
    }

    printf("number of even numbers:%d\n",even_count);
    printf("number of odd numbers:%d\n",odd_count);
    printf("sum of even numbers:%d\n",even_sum);
    printf("sum of odd numbers:%d\n",odd_sum);

    return 0;
}

