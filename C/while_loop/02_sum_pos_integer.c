/*Sum of Positive Integers Until 0

Write a C program that prompts the user to input a series of integers
 until the user stops entering 0 using a while loop.
Calculate and print the sum of all the positive integers entered*/

#include <stdio.h>
int main()
{
    int Number, Sum = 0;

    while (1)

    {
        printf("Input:\n");
        scanf("%d", &Number);
        if (Number == 0)
        {
            break;
        }
        if (Number > 0)
        {
            Sum += Number;
        }
    }
    printf("Sum : %d", Sum);
    return 0;
}