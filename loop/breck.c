#include <stdio.h>
int main()
{

    for (int i = 0; i < 1000; i++)
    {
        if (i == 50)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("Done\n");

    return 0;
}