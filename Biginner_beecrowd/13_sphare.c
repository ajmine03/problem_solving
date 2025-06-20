//(4/3) * pi * R3 =14137.155


#include<stdio.h>
#include<math.h>
int main()
{
    double pi = 3.14159;
    int R ;
    
    scanf("%d",&R);
    double vlo = ((4.0/3.0) * pi * R*R*R) ;
    printf("VOLUME = %.3lf\n",vlo);
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     double pi = 3.14159;
//     int R;
//     scanf("%d", &R);

//     double volume = (4.0 / 3.0) * pi * R * R * R;
//     printf("VOLUME = %.3lf\n", volume);

//     return 0;
// }
