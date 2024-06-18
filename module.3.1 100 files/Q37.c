#include<stdio.h>

int main(){
    char operator;
    float num1,num2,result;
    
    printf("enter operator(+, -, *, /, %%):");
    scanf(" %c",&operator);
    
    printf("enter two numbers:");
    scanf("%f %f",&num1,&num2);
    
    switch(operator){
        case '+':
            result =num1+num2;
            printf("result:%.2f\n",result);
            break;
        case '-':
            result =num1-num2;
            printf("result:%.2f\n",result);
            break;
        case '*':
            result =num1*num2;
            printf("result:%.2f\n",result);
            break;
        case '/':
            if (num2!=0) {
                result =num1/num2;
                printf("result:%.2f\n",result);
            } else{
                printf("error! division by zero.\n");
            }
            break;
        case '%':
            if (num2!=0) {
                result=(int)num1%(int)num2;
                printf("result:%.2f\n",result);
            } else{
                printf("error! division by zero.\n");
            }
            break;
        default:
            printf("error! invalid operator.\n");
    }
    
    return 0;
}

