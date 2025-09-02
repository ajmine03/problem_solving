#include<stdio.h>
int main()
{
    int A ;
    scanf("%d",&A);
    for (int i = 0; i < A; i++)
    {   
        if (i == A - 1) printf("Ho");
        else printf("Ho ");

    }
    printf("!\n");
}