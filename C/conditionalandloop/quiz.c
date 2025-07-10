/*Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F */

#include <stdio.h>
int main()
{
    int Num;
    printf("what is your mark :");
    scanf("%d", &Num);

    if (Num >= 90 && Num <= 100)
    {
        printf("A");
    }

    else if (Num >= 80 && Num < 90)
    {
        printf("B");
    }

    else if (Num >= 70 && Num < 80)
    {
        printf("C");
    }

    else if (Num >= 60 && Num < 70)
    {
        printf("D");
    }

    else if (Num >= 50 && Num < 60)
    {
        printf("E");
    }

    else if (Num < 50 && Num >= 0)
    {
        printf("F");
    }

    return 0;
}