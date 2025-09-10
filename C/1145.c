#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X > 1 && X < 20 && X < Y && Y < 100000)
    {
        for (int i = 1; i <= Y; i++)
        {

            if (i % X == 0)
            {
                printf("%d\n", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}