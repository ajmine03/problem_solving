/*
Even or Odd
Write a program that takes an integer input and prints whether it is even or odd.
*/

#include <stdio.h>
int main()
{
    int Num;                   // ditect numbers
    printf("Input the num :"); // this will take input from user
    scanf("%d", &Num);         // detect number

    if (Num % 2 == 0 || Num == 0)
    {
        printf("you entered even number");
    }

    else
    {
        printf("you entered odd number");
    }

    return 0;
}