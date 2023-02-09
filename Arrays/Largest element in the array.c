#include <stdio.h>
int main()
{
    int  i , n, sum = 0;       

    printf ("Enter the size of array : ");
    scanf ("%d", &n);

    int a[n] ;
    
    for (i=0 ; i <= n - 1 ; i++)
    {
        printf ("Enter the value of a[%d] :", i);
        scanf ("%d", & a[i]);
        if (a[0] < a[i]) {
            a[0] = a[i];
        }
    }
    printf ("Largest element = %d ", a[0]);
   
    return 0;
}