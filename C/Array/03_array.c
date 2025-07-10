#include<stdio.h>
int main()
{
    int marks[90];
    // resarve space to store marks 90 intigers
    marks[0] = 32 ;
    marks[3] = 44 ;
    // can go to marks[89]

    printf("mark 0 and 3 are %d %d", marks[0],marks[3]);
    return 0 ;

}