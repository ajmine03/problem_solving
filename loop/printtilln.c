/*Write a C program using a while loop to calculate the sum of all natural numbers from 1 to n,
 where n is entered by the user.
*/

#include <stdio.h>
int main()
{
    int i = 1;
    int a;
    int sum = 0;

    printf("write the num :\n");
    scanf("%d", &a);

    printf("you entered %d\n", a);

    while (a >= i)
    {
        sum+=i ;
        i++;
    }
    /*printf("the number is %d\n", i);
    sum += i;*/

    printf("Sum = %d", sum);
    

    return 0;
}
