#include <stdio.h>
int main()
{
    int  i , srch, fnd;       //srch = search , fnd = found
    int a[5] ;
    
    for (i=0 ; i <= 4 ; i++)
    {
        printf ("Enter the value of a[%d] : ", i);
        scanf ("%d", & a[i]);
    }
   {
    printf("Enter an element to search : ");
    scanf ("%d", & srch);
   }
    fnd = 0; 
    
    for(i=0 ; i <= 4 ; i++)
    {
        if (a[i] == srch)
        {
            fnd = 1;
            printf ("%d is found in %d position.", srch, i + 1);
            break;
        }
    }
    if (fnd == 0)
    {
        printf ("%d is not found in the array.",  srch);
    }
    return 0;
}