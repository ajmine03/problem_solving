#include<stdio.h>
int main()
{
    int A ;
    scanf("%d",&A);
    for (int i = 0; i <A; i++)
    {
        
        if ((i%2)!=0)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
    
}