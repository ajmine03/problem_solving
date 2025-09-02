#include<Stdio.h>
int main()
{
    float A ;
    scanf("%f",&A);
    // float A;
    if (fmod(A,100)>0.00)
    {
        printf("%f\n",A/100);
        printf("%f\n",fmod(A,100)/50);
        printf("%f\n",fmod((A,100),50)/20);
        printf("%f\n",fmod(((A,100),50),20)/10);
        printf("%f\n",fmod((((A,100),50),20),10)/5);
        printf("%f\n",fmod(((((A,100),50),20),10),5)/2);
    }
    return 0;
}