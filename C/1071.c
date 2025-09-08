#include <stdio.h>
int main()
{
    int A, B;
    int sum = 0;
    // int sum2 = 0;
    scanf("%d %d", &A, &B);
    if (A < B)
    {
        for (int i = A + 1; i < B; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    else if (B < A)
    {
        for (int i = B + 1; i < A; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}