#include <stdio.h>
int main()
{
    int N;
    int M;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &M);
        if (M == 0)
        {
            printf("NULL\n");
        }
        else if (M > 0)
        {
            if ((M % 2) != 0)
            {
                printf("ODD POSITIVE\n");
            }
            if ((M % 2) == 0)
            {
                printf("EVEN POSITIVE\n");
            }
        }
        else if (M < 0)
        {
            if ((M % 2) != 0)
            {
                printf("ODD NEGATIVE\n");
            }
            if ((M % 2) == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
        }
    }
    return 0;
}
