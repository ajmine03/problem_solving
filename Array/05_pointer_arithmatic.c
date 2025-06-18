#include<stdio.h>
int main()
{
    
    int a = 40 ; //int a = 40;	Creates integer a with value 40
    int *ptr= &a ; //int *ptr = &a;	Pointer ptr holds address of a
    printf("The adress of &a is %u\n",&a);
    printf("The adress of &a is %u\n",ptr);
    ptr++; //ptr++;	Moves pointer to next int space
    printf("The adress of &a is %u\n",ptr);
    a++; //a++;	Increases a to 41
    printf("The adress of &a is %u\n",&a);
    printf("The adress of &a is %u\n",ptr); 



    char b = 'D'; //;	Creates integer a with value 40
    char *ptrB= &b ; //int *ptr = &b;	Pointer ptr holds address of a
    printf("The adress of &b is %u\n",&b);
    printf("The adress of &b is %u\n",ptrB);
    ptrB++; //ptrB++;	Moves pointer to next int space
    printf("The adress of &b is %u\n",ptrB);
   

    
    return 0;

}