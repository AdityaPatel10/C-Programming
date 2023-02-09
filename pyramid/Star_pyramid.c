#include <stdio.h>
int main ()  {
    int a,b ,r;
    printf ("enter the number of rows: ") ;
    scanf ("%d", &r) ;
    for (a = 1 ; a <= r ; ++a)  {

        for (b = 1 ; b <=r ; ++b)  {

        printf  ("*    ") ; 
        }
    printf ("\n") ;
}
return 0 ;
}