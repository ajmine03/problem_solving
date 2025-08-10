/*Read the four values corresponding to the x and y axes of two points in the plane,
 p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places,
  according to the formula:

Distance = 

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula, with 4 decimal places.*/

#include<stdio.h>
#include<math.h>
int main()

{
    double x1,x2,y1,y2 ;
    scanf("%lf %lf ",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);

    double p1 = x2-x1 ;
    double p2 = y2-y1 ;
    double Q = (p1*p1)+(p2*p2) ;

    double Distance = sqrt(Q) ;

    printf("%.4lf\n",Distance);

    return 0;

}
