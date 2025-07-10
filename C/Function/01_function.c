#include <stdio.h>
// function prototype
int sum(int, int);

// function defination
int sum(int x, int y)
{
    printf("print sum = %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;
    sum(a, b);

    int c = 35, d = 45;
    sum(c, d);

    return 0;
}