/*Check Leap Year
Ask the user for a year and determine if it’s a leap year.*/

#include <stdio.h>
int main()
{
    int year;

    printf("input the leap year :");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("This is leap year");
    }

    else
    {
        printf("This is not leap year");
    }

    return 0;
}