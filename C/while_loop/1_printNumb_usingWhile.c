/* Print Numbers Using Two While Loops

Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.*/

#include<stdio.h>
int main()
{
    int i = 0 ;
    while (i<=10)
    {
        printf("%d\n",i);
        i++ ;
    }
     i = 10 ;
    while (i>0)
    { 
        printf("%d\n",i);
        i-- ;
    }
    return 0;
}