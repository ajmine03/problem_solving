/*9. Right Angle Triangle Pattern with Asterisks

Write a program in C to display a pattern like a right angle triangle using an asterisk.

The pattern like :

*
**
***
*****/
#include<stdio.h>
int main()
{
    int raw ;
    printf("input raw :");
    scanf("%d",&raw);

    for (int i = 1; i <= raw; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        printf("*");
       }
       printf("\n");
       
    }
    return 0;
    
}