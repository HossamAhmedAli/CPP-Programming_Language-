/*
   write a program to pay amount to customer using fewest number of coins.
   given currency denominations: 1,5,10,25,50
*/
#include<stdio.h>
void main(void)
{
    float money;
    int money_pt;
    int pt_50,pt_25,pt_10,pt_5,pt_1;
    printf("Enter money in pounds: ");
    scanf("%f", &money);
    money_pt=money*100;
    pt_50=money_pt/50;
    money_pt=money_pt-(pt_50*50);
    pt_25=money_pt/25;
    money_pt=money_pt-(pt_25*25);
    pt_10=money_pt/10;
    money_pt=money_pt-(pt_10*10);
    pt_5=money_pt/5;
    money_pt=money_pt-(pt_5*5);
    pt_1=money_pt/1;
    money_pt=money_pt-(pt_1*1);
    printf("pt_50=%d \t pt_25=%d \t pt_10=%d \t pt_5=%d \t pt_1=%d",pt_50,pt_25,pt_10,pt_5,pt_1);


}
