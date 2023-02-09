 
 
//FUNCTION RETURNING A POINTER..


#include <stdio.h>
int *fun (int , int);
int main ()  {
    int a = 10 , b = 10;
    int *p;
    p = fun (a , b);
    printf ("Sum = %d", *p);
    return 0;
}
int *fun (int x , int y)
{
    static int add ;
    add = x+y;
    return &add;
}
