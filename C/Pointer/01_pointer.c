#include<stdio.h>
int main()
{
    int i = 41 ;
    int* k = &i ;
    printf("%p\n",k);
    printf("%p\n",&i);
    return 0;
}