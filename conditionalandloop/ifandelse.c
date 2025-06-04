#include<stdio.h>
int main()
{
    int price , age ;
    printf("input your age :");
    scanf("%d",&age);

    printf("How much money do you have? :");
    scanf("%d",&price);

    if (price > 15)
    {
        printf("you can buy\n");

        if (age > 10)
        {
           printf("but this is only for children");
        }
        

    }

    return 0;
    
}