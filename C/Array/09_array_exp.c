//N songkhok er modde sobceye smallest and largest ta print hobe

#include <stdio.h>
int main()
{
    int N, A;
    scanf("%d", &N);
    int Num[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Num[i]);
       
    }
    int smallest = Num[0];
    for (int i = 0; i < N; i++)
    {
        if (smallest > Num[i])
        {
            smallest = Num[i];
            
            
        }
       
    }
    printf("The smallest is %d\n",smallest);

    int Largest = Num[0];
    for (int i = 0; i < N; i++)
    {
        if (Largest < Num[i])
        {
            Largest = Num[i];
        }
        
    }
    printf("The Largest is %d\n",Largest);

 

    return 0;
}