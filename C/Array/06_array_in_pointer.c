#include<stdio.h>
int main(){
     int marks[] = { 3 , 4 , 6 };
     int *ptr = &marks[0];
     
     
       for (int i = 0; i < 3; i++)
       {
        //  printf("Value of array at %d index of %d\n",i,marks[i]);
         printf("Value of array at %d index of %d\n",i,*ptr);
         ptr++;
         
       }
       
     
     
    return 0;
    

}