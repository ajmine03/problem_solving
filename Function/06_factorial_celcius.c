#include<stdio.h>

float F( int C);
float F( int C){
    return C * (9.0/5.0) + 32.00  ;
}
int main()
{   
    int C ;
    scanf("%d",&C);
    printf("%f",F(C));
    return 0;
    
}
