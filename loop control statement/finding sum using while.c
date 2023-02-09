#include <stdio.h>
int main ()     {
    int i = 101, sum = 0;
    while (i < 200)      {


          if (i % 5 == 0)   {

            printf ("%d \n", i);
            sum += i;
          }
        i++;
    } 
    printf ("Sum is %d \n", sum);

    return 0;
}