#include <stdio.h> 
int main ()    {
int i,sum = 0;
  
    for (int i = 101 ; i < 200 ; i++)
        if (i % 5 == 0)    {
    printf ("%d \n", i);    

     sum += i ;
    }
       printf ("Sum is = %d", sum);
    
    return 0;
}