/*Take 4 input and print the bigest output*/

#include<stdio.h>
int main()
{
    int a , b , c , d ;
    printf("input num1 :");
    scanf("%d",&a);

    printf("input num2 :");
    scanf("%d",&b);

    printf("input num3:");
    scanf("%d",&c);
    
    printf("input num4 :");
    scanf("%d",&d);


    if (a>b && a>c && a>d)
    {
        printf("The bigest number is %d",a);
        
    }

    else if (b>a && b>c && b>d)
    {
        printf("The bigest number is %d",b);
    }

    else if (c>a && c>b && c>d)
    {
        printf("The bigest number is %d",c);
    }

    else if (d>a && d>c && d>b)
    {
        printf("The bigest number is %d",d);
    }

    return 0;
    
    
}