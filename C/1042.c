#include<stdio.h>
int main()
{
    int A , B , C ;
    scanf("%d %d %d",&A,&B,&C);
    if(A>B && C>B)
    {
        if (A>C)
        {
            printf("%d\n",B);
            printf("%d\n",C);
            printf("%d\n",A);
        }
        else if (C>A)
        {
            printf("%d\n",B);
            printf("%d\n",A);
            printf("%d\n",C);
        }
        
        
    }
    else if (C>A && B>A)
    {
        if (C>B)
        {
           printf("%d\n",A);
           printf("%d\n",B);
           printf("%d\n",C);
        }
        else if (B>C)
        {
           printf("%d\n",A);
           printf("%d\n",C);
           printf("%d\n",B);
        }
        
    }
    else if (A>C && B>C)
    {
        if (B>A)
        {
           printf("%d\n",C);
           printf("%d\n",A);
           printf("%d\n",B);
        }
        else if (A>B)
        {
           printf("%d\n",C);
           printf("%d\n",B);
           printf("%d\n",A);
        }
        
        
    }
        printf("\n");
        printf("%d\n",A);
        printf("%d\n",B);
        printf("%d\n",C);
    return 0 ;
    
}