#include<stdio.h>
#include<math.h>
int main()
{
    double A , B , C ;
    scanf("%lf %lf %lf",&A,&B,&C);
    // double S = (A+B+C)/2.0 ;
    // // float Area = sqrt(S*(S-A)*(S-B)*(S-C));
    if (((A+B)>C) && ((B+C)>A) && ((A+C)>B))
    {
        printf("Perimetro = %.1f\n",A+B+C);
    }
    else{
        printf("Area = %.1f\n",(A+B)*C/2.0);
    }

    return 0;
    
}