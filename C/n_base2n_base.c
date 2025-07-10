// N base to 10 base conversion.
#include<stdio.h>
#include<math.h>


int main(){
int i, j , k, l ;
int base ;
int r1,r2,r3,r4 ;
scanf("%d %d %d %d", &i,&j,&k,&l);
printf("input base");
scanf("%d",&base);

r1 = 1 * i * pow(base,base);
r2 = 1 * j * pow(base,base-1);
r3 = 1 * k * pow(base,base-2);
r4 = 1 * l * pow(base,base-3);
printf("%d\n",r1+r2+r3+r4);


return 0;



}