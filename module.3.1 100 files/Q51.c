#include<stdio.h>

int main(){
int angle1,angle2,angle3;

    printf("enter the three angles of the triangle:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);

    if(angle1+angle2+angle3==180&&angle1>0&&angle2>0&&angle3>0)
        printf("triangle can be formed with the given angles\n");
    else
        printf("triangle cannot be formed with the given angles\n");

    return 0;
}

