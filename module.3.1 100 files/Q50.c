#include<stdio.h>

int main(){
float temperature;

    printf("enter temperature in centigrade:");
    scanf("%f",&temperature);

    if(temperature<0)
        printf("freezing weather\n");
    else if(temperature>=0&&temperature<=10)
        printf("very cold weather\n");
    else if(temperature>10&&temperature<=20)
        printf("cold weather\n");
    else if(temperature>20&&temperature<=30)
        printf("normal in temp\n");
    else if(temperature>30&&temperature<=40)
        printf("its hot\n");
    else
        printf("its very hot\n");

    return 0;
}

