#include <stdio.h>
int main ()   {
    int r, a, b, c ;
    printf ("Enter the number of rows : ");
    scanf ("%d", &r);
    for (a = 1 ; a <= r ; a++)  {
        
        for (b = 1 ; b <= r-a ; b++)   {

            printf (" ");
        }
        for (c = 1 ; c <= a ; c++) {
            printf ("%d ", c);
        }
        printf ("\n");
    }
    for (int i = r - 1 ; i >= 1 ; i--)
    {
        for (int k = 1 ; k <= r - i ; k++)   {

            printf (" ");
        }
        for (int j = 1 ; j <= i ; j++)
        {
            printf ("%d ", j);
        }
        printf ("\n");
    }
    return 0;
}