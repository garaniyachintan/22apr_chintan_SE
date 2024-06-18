#include<stdio.h>

int main(){
char names[5][50];
int i;

    printf("enter 5 names:\n");
    for(i=0;i<5;i++){
        printf("name %d:",i+1);
        scanf("%s",names[i]);
    }

    printf("\nnames entered by the user:\n");
    for (i=0;i<5;i++){
        printf("%d %s\n",i+1,names[i]);
    }

    return 0;
}

