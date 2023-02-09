#include <stdio.h>
int main ()   {
    int i, j, m, n, row, col, flag = 1;
    printf ("Enter the number of rows of MATRIX A : ");
    scanf ("%d", &i);
    printf ("Enter the number of coloumns of MATRIX A :");
    scanf ("%d", &j);

    

    int a[i][j] ;
    
    for (row = 0 ; row < i ; row++)
    {
        for (col = 0 ; col < j ; col++)
        {
            printf ("Enter the value of a[%d][%d] : ", row, col);
            scanf ("%d", & a[row][col]);
        }
    }

    printf ("Matrix A obtained is : \n");

    for (row = 0 ; row < i ; row++)
    {
        for (col = 0 ; col < j ; col++)
        {
            printf ("%d    ", a[row][col]);
        }
        printf ("\n");
    }

    printf ("Enter the number of rows of MATRIX B : ");
    scanf ("%d", &m);
    printf ("Enter the number of coloumns of MATRIX B :");
    scanf ("%d", &n);
    int b[m][n];

    for (row = 0 ; row < m ; row++)
    {
        for (col = 0 ; col < n ; col++)
        {
            printf ("Enter the value of b[%d][%d] : ", row, col);
            scanf ("%d", & b[row][col]);
        }
    }

    printf ("Matrix B obtained is : \n");
    
    for (row = 0 ; row < m ; row++)
    {
        for (col = 0 ; col < n ; col++)
        {
            printf ("%d    ", b[row][col]);
        }
        printf ("\n");
    }

    if (i == m && j == n)
    {
        printf ("MATRIX A and MATRIX B can be compared.\n");

         for (row = 0 ; row < i ; row++)
    {
        for (col = 0 ; col < j ; col++)
        {
            if (a[row][col] != b[row][col])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    printf ("And MATRIX A and MATRIX B is same.");
    else 
    printf ("But MATRIX A and MATRIX B is different.");
    }
    else
    printf ("MATRIX A and MATRIX B can not be compared.");
   
    return 0;
}