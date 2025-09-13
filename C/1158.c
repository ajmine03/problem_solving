#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long A, B;
    while (scanf("%lld %lld", &A, &B) == 2)
    {
        printf("%lld\n", llabs(A - B));
    }

    return 0;
}