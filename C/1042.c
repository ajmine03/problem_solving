#include<stdio.h>
int main()
{
    int A , B , C ;
    scanf("%d %d %d",&A,&B,&C);
    if(A>B && B>C && A>C)
    {
        printf("%d\n",A);
        printf("%d\n",B);
        printf("%d\n",C);
    }
    else if (B>C && C>A && B>A)
    {
        printf("%d\n",B);
        printf("%d\n",C);
        printf("%d\n",A);
    }
    else if (C>A && C>B && A>B)
    {
        printf("%d\n",C);
        printf("%d\n",A);
        printf("%d\n",B);
    }
        printf(" \n");
        printf("%d\n",A);
        printf("%d\n",B);
        printf("%d\n",C);
    return 0 ;
    
}