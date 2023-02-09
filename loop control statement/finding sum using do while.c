#include <stdio.h>
int main ()        {
    int i = 101, sum = 0 ;
    do   {
        if (i % 5 == 0)  {
            printf ("%d \n", i);
            sum += i;
        }
         i++;

 }     while (i < 200);
    
        printf ("Sum is %d", sum);

        
return 0 ;
}