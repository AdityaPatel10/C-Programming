#include <stdio.h>
int main () {
    int r, flag=1;
    printf ("Enter the number of rows : ");
    scanf ("%d", &r);

    for (int i=0; i<r; i++)
    {
        for (int j=0; j<r-i; j++)
        {
            printf (" ");
        }
        for (int k=0; k<=i; k++)
        {
            if (i==0 || k==0 || i==k)
            {
                flag = 1;
            }
            else 
            {
                flag = flag*(i-k+1)/k;
            }
            printf ("%d ", flag);
        }
        printf ("\n");
    }
    return 0;
}