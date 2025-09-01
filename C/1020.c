#include<stdio.h>
int main()
{
    int TIME ;
    scanf("%d",&TIME);
    printf("%d ano(s)\n",TIME/365);
    printf("%d mes(es)\n",(TIME%365)/30);
    printf("%d dia(s)\n",((TIME%395)%30));

   
    return 0;

}