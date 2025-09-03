#include <stdio.h>
#include <math.h>
int main()
{
    int R;

    double PI = 3.1415;
    int A;
    scanf("%d %d", &R, &A);

    double V = (4.0/3.0) * PI * pow(R,3);
    printf("%.0f\n",floor(A/V));

    return 0;
}