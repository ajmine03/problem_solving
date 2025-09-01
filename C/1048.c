#include<stdio.h>
int main()
{
    float A ;
    scanf("%f",&A);
    if (A >= 0.00 && A <= 400.00)
    {
        printf("Novo salario: %.2f\n",(A+(15*A/100)));
        printf("Reajuste ganho: %.2f\n",((15*A/100)));
        printf("Em percentual: 15 %%\n");
    }
    else if (A > 400.00 && A <= 800.00)
    {
        printf("Novo salario: %.2f\n",(A+(12*A/100)));
        printf("Reajuste ganho: %.2f\n",((12*A/100)));
        printf("Em percentual: 12 %%\n");
    }
    else if (A > 800.00 && A <= 1200.00)
    {
        printf("Novo salario: %.2f\n",(A+(10*A/100)));
        printf("Reajuste ganho: %.2f\n",((10*A/100)));
        printf("Em percentual: 10 %%\n");
    }
    else if (A > 1200.00 && A <= 2000.00)
    {
        printf("Novo salario: %.2f\n",(A+(7*A/100)));
        printf("Reajuste ganho: %.2f\n",((7*A/100)));
        printf("Em percentual: 7 %%\n");
    }
    else if (A > 2000)
    {
        printf("Novo salario: %.2f\n",(A+(4*A/100)));
        printf("Reajuste ganho: %.2f\n",((4*A/100)));
        printf("Em percentual: 4 %%\n");
    }

    return 0;
    
}