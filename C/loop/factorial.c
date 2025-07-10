/* Write a C program using a while loop to calculate the
factorial of a number n entered by the user. */

#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    int sum = 1;

    printf("enter n =");
    scanf("%d", &n);

    while (i <= n)
    {

        sum *= i;
        i++;
    }

    printf("the sum of factorial number is %d", sum);
    return 0;
}