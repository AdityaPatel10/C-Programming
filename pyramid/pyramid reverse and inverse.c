#include<stdio.h>
int main ()    {
    int a, b, r ;

    printf ("Enter the number of rows :  ");
    scanf ("%d", &r);


    for (a = r ; a >= 1 ; --a)  {

        for (b = 1 ; b <= a ; ++b)   {

        printf ("%d       ", b) ;
        }
    printf ("\n") ;
}

    for (a = 2 ; a <= r ; ++a)  {

        for (b = 1 ; b <=a ; ++b) {

        printf ("%d       ", b); 
        }
    printf ("\n");
}
return 0 ;
}