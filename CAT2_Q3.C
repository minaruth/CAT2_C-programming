// a c program for calculating the salary

#include <stdio.h>

int main(){
    float hours,hourly_wage,gross_pay,taxes,net_pay;
    // prompt the user to enter the variables

    printf("Hours worked in a week: ");
    scanf("%f",&hours);
    printf("Hourly wage: ");
    scanf("%f",&hourly_wage);
//use of if else statement to calculate the gross pay

    if (hours>40){
        gross_pay=(40*hourly_wage)+((hours-40)*hourly_wage*1.5);
    } else {
        gross_pay=hours*hourly_wage;
    }

// use of if else statement to calculate the taxes
    if (gross_pay>600){
        taxes=(600*0.15)+((gross_pay-600)*0.20);
    } else {
        taxes=gross_pay*0.15;
    }

// how to calculate the net pay
    net_pay=gross_pay-taxes;

    printf("gross_pay:$%.2f\n",gross_pay);
    printf("taxes:$%.2f\n",taxes);
    printf("netpay: $%.2f\n",net_pay);

    return 0;
}
