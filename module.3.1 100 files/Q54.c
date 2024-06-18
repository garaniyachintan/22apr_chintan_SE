#include<stdio.h>

int main(){
int customer_id,unit_consumed;
char customer_name[50];
float charge_per_unit,total_amount,surcharge=0.0;

    printf("enter customer id:");
    scanf("%d",&customer_id);
    printf("Entercustomername:");
    scanf("%s",customer_name);
    printf("enter units consumed:");
    scanf("%d",&unit_consumed);

    if(unit_consumed<=350)
        charge_per_unit=1.20;
    else if(unit_consumed>350&&unit_consumed<600)
        charge_per_unit=1.50;
    else if(unit_consumed>=600&&unit_consumed<800)
        charge_per_unit=1.80;
    else
        charge_per_unit=2.00;

    total_amount=unit_consumed*charge_per_unit;

    if(total_amount>800){
        surcharge=total_amount*0.18;
        total_amount+=surcharge;
    }

    if(total_amount<256)
        total_amount=256;

    printf("\nelectricity bill\n");
    printf("customer id: %d\n",customer_id);
    printf("customer name: %s\n",customer_name);
    printf("units consumed: %d\n",unit_consumed);
    printf("ccarge per unit:%.2f\n",charge_per_unit);
    printf("surcharge: %.2f\n",surcharge);
    printf("total amount: %.2f\n",total_amount);

    return 0;
}

