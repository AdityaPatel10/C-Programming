#include <stdio.h>
int main ( )    {
    int i, swap;
    printf ("Enter the size : ");
    scanf ("%d", &i);
    int arr[i];
    printf ("Enter the values :\n");
    for (int r = 0 ; r < i ; r++)
    {
        scanf ("%d", &arr[r]);
    }
    for (int r = 0 ; r < i-1 ; r++)
    {
        for (int c = 0 ; c < i-r-1 ; c++)
        {
            if (arr[c] > arr[c+1])
            {
                swap = arr[c];
                arr[c] = arr[c+1];
                arr[c+1] = swap;
            }
        }
    }
    printf ("Sorted to accending order : \n");
    for (int r = 0 ; r < i ; r++)
    {
        printf ("arr[%d] is : %d\n", r, arr[r]);
    }
    return 0;
}