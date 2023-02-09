#include<stdio.h>
#include <conio.h>
int main ()    {
    int a, b, c,  r ;
    printf ("enter the number of rows: ");
    scanf ("%d", &r) ;

    for (a = 1 ; a <= r ; a++)  {

        for (b = a ; b < r ; b++)   {

            printf (" ");
        }
            for (c = 1 ; c <= (2* a - 1) ; c++)    {

        printf ("*") ;
        }
    printf ("\n") ;
}
return 0;
}