#include <stdio.h>
int main()
{
    int  i , n, sum = 0 ;       
   
    printf ("Enter the size of array : ");
    scanf ("%d", &n);

    int a[n] ;

    for (i=0 ; i <= n - 1 ; i++)
    {
        printf ("Enter the value of a[%d] : ", i);
        scanf ("%d", & a[i]);
        sum += a[i];
    }
     
    printf ("Sum of all element in this array is  %d. ", sum);
   
    return 0;
}