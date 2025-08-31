#include<stdio.h>
int main()
{
    char DD,MM,YY ;
    scanf("%c/%c/%c",&DD,&MM,&YY);
    
    printf("%c/%c/%c\n",MM,DD,YY);
    printf("%c/%c/%c\n",YY,MM,DD);
    printf("%c-%c-%c\n",DD,MM,YY);
   
    return 0;

}