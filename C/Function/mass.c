#include<stdio.h>
float weight(int m);
float weight(int m){
    return m * 9.8 ;
}

int main()
{   int m ;
    scanf("%d",&m);

    printf("%f",weight(m));
    return 0;
}