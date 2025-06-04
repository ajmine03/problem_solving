#include <stdio.h>
int main()
{
    int i = 0;

    printf("The number will show :0 =  %d\n",i);
    i++ ;

    printf("The number will show :1 =  %d\n",i);
    //printf("The number will show :2 =  %d\n",i);
    //printf("The number will show :3 =  %d\n",i);
    i-- ;
    
    printf("The number will show :0 =  %d\n",i);
    i+=2 ;
    printf("The number will show :2 =  %d\n",i);

    i+=100;
    printf("The number will show :102 =  %d\n",i);
    

    return 0;
}