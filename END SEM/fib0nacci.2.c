#include <stdio.h>
int main ()  {
    int f1 = 0, f2 = 1, f3 = 0, i;
    printf ("Enter a number : ");
    scanf ("%d", &i);
    printf ("%d %d ", f1, f2);
    do
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf ("%d ", f3);
        i--;
    }while(i > 2 );
    return 0;
}