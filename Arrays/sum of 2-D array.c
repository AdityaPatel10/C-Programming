#include <stdio.h>
int main ()    {
    int i, j, row, col, sum = 0;
    printf ("Enter the vakkue of row : ");
    scanf ("%d", &i);
    printf ("Enter the value of column : ");
    scanf ("%d", &j);

    int arr[i][j];
    
    for (row = 0 ; row < i ; row++)
    {
        for (col = 0 ; col < j ; col++)
        {
            printf ("Enter the value of arr[%d][%d] : ", row, col);
            scanf ("%d", & arr[row][col]);
            sum += arr[row][col];
        }
    }
    printf ("\nSum of all elements in this array is %d.", sum);
    return 0;
} 