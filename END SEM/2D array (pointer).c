#include <stdio.h>
int main ()   {
    int i, j, row, col;
    printf ("Enter the rows and coloumns of array : ");
    scanf ("%d  %d", &i, &j);
    int *arr[i][j];
    printf("Read the elements in array :-\n");
    for (row = 0 ; row < i ; row++)
    {
        for (col = 0 ; col < j ; col++)
        {
            scanf ("%d",  (*(arr + row)+ col));
        }
    }
    printf ("Display the elements of the array :-\n");

    for (row = 0 ; row < i ; row++)
    {
        for (col = 0 ; col < j ; col++)
        {
            printf ("arr[%d][%d] is : %d\n", row, col, *(*(arr + row) + col));
        }
    }
    return 0;
}