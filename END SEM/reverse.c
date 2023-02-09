#include <stdio.h>
int main () {
    int n, i;
    printf ("Enter the size of an array : ");
    scanf ("%d", &n);
    int arr[n];
    int *ptr;
    ptr = arr;

    for (i = 0 ; i < n ; i++)
    {
        printf ("Enter the value of arr[%d] : ", i);
        scanf ("%d", ptr);
       ptr++;
    }
    ptr = &arr[n-1];
    printf ("Reverse order of the array is : \n");
    for (i = n - 1 ; i >= 0 ; i--)
    {
        printf ("Value of arr[%d] is %d\n", i, *ptr);
       ptr--;
    }
    return 0;
}