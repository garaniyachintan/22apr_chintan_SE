#include<stdio.h>

int main(){
float cost_price,selling_price,profit, loss;

    printf("enter the cost price:");
    scanf("%f",&cost_price);

    printf("enter the selling price:");
    scanf("%f",&selling_price);

    if(selling_price>cost_price){
        profit=selling_price-cost_price;
        printf("profit:%.2f\n",profit);
    }else if(selling_price<cost_price){
        loss=cost_price-selling_price;
        printf("loss:%.2f\n",loss);
    } else{
        printf("no profit,no loss.\n");
    }

    return 0;
}

