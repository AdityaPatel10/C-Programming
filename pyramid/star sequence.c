#include <stdio.h>
int main ()   {
    int r, a, b, c ;
    printf ("Enter the number of rows : ");
    scanf ("%d", &r);
    printf ("Enter the number of coloumns : ");
    scanf ("%d", &c);
    for (a = 1 ; a <= r ; ++a)  {
        
        for (b = 1 ; b <= c ; ++b)   {

            printf (" * ", b);
        }
        printf ("\n");
    }
    return 0;
}