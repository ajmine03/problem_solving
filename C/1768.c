#include<stdio.h>
int main()
{   int A;
    int B;
    while (scanf("%d",&A)==1)
    {
        scanf("%d",&B);
        for (int i = 0; i < B; i++)
        {
            for (int i_1 = 0; i_1 < B; i_1++)
            {
                printf("*",i);
                printf("*",i_1);
            }
            

        }
        
    }
    
}