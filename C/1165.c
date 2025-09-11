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
        if (A == 2 || A == 3 || A == 5 || A == 7)
        {
            printf("%d eh primo\n", A);
        }
        else if (A % 2 == 0 || A % 3 == 0 || A % 5 == 0 || A % 7 == 0)
        {
            printf("%d nao eh primo\n", A);
        }
        else if ((sqrt(A) == floor(sqrt(A))))
        {
            printf("%d nao eh primo\n", A);
        }
        else
        {
            printf("%d eh primo\n", A);
        }
    }

    return 0;
}