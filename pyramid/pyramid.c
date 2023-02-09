#include<stdio.h>
int main ()    {

    int a, b, r ;    
    printf ("enter the number of rows: ") ;
    scanf ("%d", &r) ;
    for (a = 1 ; a <= r ; ++a)  {

        for (b = 1 ; b <=a ; ++b) {

        printf ("%d  ", b); 
        }
    printf ("\n");
}
return 0;
}