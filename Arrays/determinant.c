#include <stdio.h>
int main ()   {
    int row, col, d, i ,j;
    int arr[3][3];
    for (i = 0 ; i < 3 ; i++ )
    {
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("Enter the value of arr[%d][%d] :", i, j);
            scanf ("%d", & arr[i][j]);
        }
    }
    printf ("MATRIX A obtaiined is :-\n");

    for (i = 0 ; i < 3 ; i++ )
    {
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("%d   ", arr[i][j]);
        }
        printf ("\n");
    }

    
    d = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
    printf ("Determinant is of matrix A is %d",d);

    return 0;
}