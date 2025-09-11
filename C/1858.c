#include <stdio.h>
int main()
{
    int N;
    while (scanf("%d", &N) == 1)
    {
        double num[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%lf", &num[i]);
        }
        double Fastest = num[0];
        for (int i = 0; i < N; i++)
        {
            if (Fastest > num[i])
            {
                Fastest = num[i];
            }
        }
        printf("%.2lf\n", Fastest);
    }
    return 0;
}