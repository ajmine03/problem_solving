#include<stdio.h>
int main()
{   
    int age,income ;
    printf("input your age :");
    scanf("%d",&age);
    
    printf("Input your income per minute in dollar:");
    scanf("%d",&income);


    //printf("%d",age*income);
    int S = age * income ;

    if (S == 0)
    {
       printf("you have no girlfrind");
    }
    else {
        printf("you have %d girlfrind monthly");
     }
    
     return 0;
}