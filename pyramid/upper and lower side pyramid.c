#include <stdio.h>
int main ()   {
    int a, b, c, r ;
    printf ("Enter the number of rows : ");
    scanf ("%d", &r);
    int t = r -1 , n = 1 ;
    
    for (a = 1 ; a <= r ; a++)
    {
        for (b = 1 ; b <= t ; b++)  
        {
        printf ("  ");
    }
    for (c = 1 ; c <= n ; c++)
    {
        printf ("%d ", c);
    }
    if (t > a)
    {
        t = t - 1;
        n = n + 2;
    }
    if (t < a)
    {
        t = t + 1;
        n = n - 2;
    }
    printf ("\n");
}
return 0;
}