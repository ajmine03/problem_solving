/*Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas 
described above, always with a corresponding message (in Portuguese) and one space between
 the two points and the value. The value calculated must be presented with 3 digits after the decimal point.
*/

#include<stdio.h>
int main()
{
    float A,B,C ;
    double pi = 3.14159 ;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    printf("TRIANGULO: %.3f\n",((1.0/2.0)* A * C));
    printf("CIRCULO: %.3f\n",pi * C * C);
    printf("TRAPEZIO: %.3f\n",((A+B)/2)*C);
    printf("QUADRADO: %.3f\n",B*B);
    printf("RETANGULO: %.3f\n",(A*B));
    
    return 0;
}