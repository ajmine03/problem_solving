#include<stdio.h>
int main()
{
    int marks[5];
    printf("input 5 students marks ");
    scanf("%d %d %d %d %d",&marks[0] ,&marks[1], &marks[2], &marks[3] ,&marks[4]);

    printf("mark  are %d %d %d %d %d", marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0 ;

}