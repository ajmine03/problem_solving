/* Sum and Average of 10 Numbers from Keyboard

Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/

#include <stdio.h>
int main()
{
    int sum=0, n;
    float avg;
    for (int i = 1; i <= 10; i++)
    {
        printf("input n :");
        scanf("%d", &n);
        sum += n;
    }
    printf("%d\n",sum);
    printf("%.2f", avg = (sum / 10));
    return 0;
}