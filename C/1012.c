#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    double pi = 3.14159;
    printf("TRIANGULO: %.3f\n",(A*C)/2);
    printf("CIRCULO: %.3f\n",pi*C*C);
    printf("TRAPEZIO: %.3f\n",((A+B)*C)/2);
    printf("QUADRADO: %.3f\n",B*B);
    printf("RETANGULO: %.3f\n",A*B);

    return 0;

}