#include<stdio.h>
int main()
{
    while(1)
    {
        int M , N ;
        scanf("%d %d",&M,&N);
    int sum = 0 ;
    if (M<=0 || N<=0)
    {
        break;
    }
     
    if (M>N && N>0)
    {    
        for (int i = N; i <= M; i++)
        {
            printf("%d ",i);
            sum +=i;
        }
        printf("sum=%d\n",sum);
    }
    else if (N>M && M>0)
    {
        for (int i = M; i <= N; i++)
        {
            printf("%d ",i);
            sum +=i;
        }
        printf("sum= %d\n",sum);
    }
   
    // printf("%d\n",sum);
   
    }


    
    return 0;
}