#include<stdio.h>

float avg ( int a, int b , int c );
float avg ( int a, int b , int c ){
    return (a+b+c)/3 ;
}

int main()
{  int a , b , c ;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%f",avg(a,b,c));
    return 0;
}
