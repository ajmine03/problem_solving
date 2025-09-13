#include <stdio.h>
#include <math.h>
int main()
{
    int X;   
    scanf("%d", &X);
    int A;
    for (int i = 0; i < X; i++)
    {
        scanf("%d", &A);
         int count = 0;
        for (int i = 1; i <= 10000000; i++)
        {
            if (A % i == 0)
            {
                count++;
            }
            if (count > 2)
            {
                printf("%d nao eh primo\n", A);
                
            }
            else
            {
                printf("%d eh primo\n", A);
                
            }
            
        }
    }

    return 0;
}