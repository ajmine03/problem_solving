#include<stdio.h>
#include<math.h>
int main()

{
    double a,b,c ;
    scanf("%lf %lf %lf",&a,&b,&c);
    double S1 =(b*b - 4*a*c);

    if (S1<0 || a==0)
    {
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n", (-b+ sqrt(b*b - 4*a*c) )/(2*a));
        printf("R2 = %.5lf\n", (-b- sqrt(b*b - 4*a*c) )/(2*a));
    }
   return 0;
}