#include <stdio.h>
int main ( )    {
    int n, swap, i, j, min, t;
    printf ("Enter tyhe size : ");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter %d elements : \n", n);
    for (i = 0 ; i < n ; i++)
    {
        scanf ("%d", &arr[i]);
    }
    for (i = 0 ; i < n-1 ; i++)
    {
        min = i;
        for (j = i+1 ; j < n ; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
            if (min != i)
            {
                t = arr[i];
                arr[i] = arr[min];
                arr[min] = t;
            }
        
    }
    printf ("Sorted in accending oorder :\n");
    for (i = 0 ; i < n ; i++)
    {
        printf ("arr[%d] : %d\n", i, arr[i]);
    }
    return 0;
}