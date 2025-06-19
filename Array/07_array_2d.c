#include<stdio.h>
int main(){
    int array[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("input the value of [%d][%d]\n",i,j);
            scanf("%d",&array[i][j]);
        }
        
    }


     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("input the value of [%d][%d] is %d\n",i,j,array[i][j]);
           
        }
        
    }

    return 0;
    
    
}