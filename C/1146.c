#include <stdio.h>
int main()
{
    int A;

    while (1)
    {
        scanf("%d", &A);
        if (A == 0)
        {
            break;
        }

        for (int i = 1; i <= A; i++)
        {
            if (i != A)
            {
                printf("%d ", i);
            }
            else if (i == A)
            {
                printf("%d\n", i);
            }
        }
    }
}