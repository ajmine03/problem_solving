#include<Stdio.h>
#include<math.h>
int main()
{
    float A ;
    scanf("%f",&A);
    // float A;
    if (fmod(A,100)>0.00)
    {
        printf("%.2f\n",floor(A/100));
        printf("%.2f\n",floor(fmod(A,100)/50));
        printf("%.2f\n",floor(fmod(fmod(A,100),50)/20));
        printf("%.2f\n",floor(fmod(fmod(fmod(A,100),50),20)/10));
        printf("%.2f\n",floor(fmod(fmod(fmod(fmod(A,100),50),20),10)/5));
        printf("%.2f\n",floor(fmod(fmod(fmod(fmod(fmod(A,100),50),20),10),5)/2));
    }
    
    
    return 0;
}