#include<stdio.h>
int main()
{
    int code, code_2, units,units_2 ;
    float price,price_2 ;
    scanf("%d %d %f",&code,&units,&price);
    scanf("%d %d %f",&code_2,&units_2,&price_2);

    printf("VALOR A PAGAR: R$ %.2f\n",units*price+units_2*price_2);
    return 0;
}