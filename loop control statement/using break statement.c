#include <stdio.h>
int main ()   {
 int n;

 do {

    printf ("Enter number : ");
    scanf ("%d", &n);
    
    if (n % 2 != 0)  {              //!= this sign indicate not equal to

        printf ("%d is an odd number.\n", n);

             break ;             //when the statement is true break statement
    }
             else    {

             printf ("%d is an even number.\n", n);
    }

   }  while (  1  ) ;                          // using 1 in while means all the conditions are true
            printf ("Thankyou..");
            return 0;
 }
