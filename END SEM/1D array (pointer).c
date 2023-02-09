#include <stdio.h>
int main ()  {
    int i, j;
    printf ("Enter the size of an array : ");
    scanf ("%d", &i);
    int *arr[i];
    printf ("Read elements of an array :-\n");
    for (j = 0 ; j < i ; j++)
    {
        scanf ("%d", (arr + j));
    }
    printf ("Display the elements of the array :-\n");
    for (j = 0 ; j < i ; j++)
    {
        printf ("arr[%d] is : %d\n", j, *(arr + j));
    }
    return 0;
}