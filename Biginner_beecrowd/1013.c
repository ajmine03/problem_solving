// #include <stdio.h>
// int main()
// {
//     int A, B, C;

//     scanf("%d %d %d", &A, &B, &C);

//     if (A > B)
//     {
//         if (A > C)
//         {
//             printf("%d eh o maior\n", A);
//         }
//     }
//     else if (C > B)
//     {
//         if (C > B)
//         {
//             printf("%d eh o maior\n", C);
//         }
//     }
//     else
//     {
//         printf("%d eh o maior\n", C);
//     }

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A , B , C ;
    

    
    
    scanf("%d %d %d",&A , &B , &C);
    int maiorAB = (A + B + abs(A - B)) / 2;
    int maiorABC = (maiorAB + C + abs(maiorAB - C)) / 2;
    printf("%d eh o maior\n",maiorABC);
    
    
    return 0;
}