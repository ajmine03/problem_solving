/*Positive, Negative, or Zero
Take a number as input and determine if it's positive, negative, or zero.*/

#include <stdio.h>
int main()
{
    int Num;
    printf("input a number :");
    scanf("%d", &Num);
    if (0 <= Num)
    {
        printf("This number is positive");
    }

    else if (Num == 0)
    {
        printf(" This number is posetive and zero ");
    }

    else if (0 > Num)
    {
        printf("This number is negetive");
    }

    return 0;
}