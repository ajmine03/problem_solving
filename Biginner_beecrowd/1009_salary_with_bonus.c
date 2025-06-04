#include <stdio.h>
int main()
{
    char name[100];
    float B, C;

    scanf("%s", &name);
    scanf("%f", &B);
    scanf("%f", &C);

    printf("%s\n", name);
    printf("TOTAL = R$ %.2f\n", (B + ((C * 15 ) / 100)));
    return 0;
}