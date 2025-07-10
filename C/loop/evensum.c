/*Write a C program that uses a while loop to calculate the sum of
all even natural numbers from 1 to n, where n is entered by the user.*/

#include <stdio.h>
int main()
{
    int i = 0;
    int n;
    int sum = 0;

    printf("enter n =");
    scanf("%d", &n);

    while (n >= i)
    {

        if (i % 2 == 0)
        {
            sum += i;
            
        }
        i++;
    }

    printf("the sum of all even natural number 1 to n is %d", sum);
    return 0;
}