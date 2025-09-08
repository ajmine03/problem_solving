#include <stdio.h>
int main()
{
    int N;
    float X, Y;
    scanf("%d", &N);
    // scanf("%d %d",&X,&Y);
    for (int i = 0; i < N; i++)
    {
        scanf("%f %f", &X, &Y);
        if (Y != 0.0)
        {
            printf("%.1f\n", X / Y);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }

    return 0;
}