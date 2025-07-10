#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            printf("even number 1 to 50 are %d", i);
            i++;
        }
    }

    return 0;
}