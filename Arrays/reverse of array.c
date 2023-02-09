#include <stdio.h>
int main()
{
    int  i , n, sum = 0 ;       
    
    printf ("Enter the size of array : ");
    scanf ("%d", &n);
    
    int a[n] ;

    for (i=0 ; i <= n - 1 ; i++)
    {
        printf ("Enter the value of a[%d] :", i);
        scanf ("%d", & a[i]);
    }
    printf ("Reverse of the array is :\n");
    for (i = n - 1 ; i >= 0 ; i--)
     printf ("%d\n", a[i]);
    
   
    return 0;
}