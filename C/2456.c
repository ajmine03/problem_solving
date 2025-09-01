#include<stdio.h>
int main(){
    int A , B , C , D , E ;
    scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
    if (A < B && B < C && C < D && D < E)
    {
        printf("C\n");
    }
    else if (A > B && B > C && C > D && D > E)
    {
        printf("D\n");
    }
    
    else{
        printf("N\n");
    }
    return 0;
}