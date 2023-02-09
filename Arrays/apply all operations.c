#include <stdio.h>
int main ()    {
    int i, j, m, n, row, col, k, sum = 0, sub = 0, flag = 1;

    printf ("Enter the number of rows of MATRIX A : ");
    scanf ("%d", &i);
    printf ("Enter the number of coloumns of MATRIX A : ");
    scanf ("%d", &j);
    int a[i][j];

    for (row = 0 ; row < i ; row++)
    {
        for (col = 0 ; col < j ; col++)
        {
            printf ("Enter the value of a[%d][%d] : ", row, col);
            scanf ("%d", &a[row][col]);
        }
    }

    printf ("\nMATRIX A obtained will be : \n");

     for (row = 0 ; row < i ; row++)
     {
        for (col = 0 ; col < j ; col++)
        {
            printf ("%d   ", a[row][col]);
        }
        printf ("\n");
     }

     printf ("\nTranspose of MATRIX A is :-\n");

     for (row = 0 ; row < j ; row++)
     {
        for (col = 0 ; col < i ; col++)
        {
            printf ("%d   ", a[col][row]);
        }
        printf ("\n");
     }

      printf ("\nEnter the number of rows MATRIX B : ");
      scanf ("%d", &m);
      printf ("Enter the number of coloumns of MATRIX B: ");
      scanf ("%d", &n);

      int b[m][n] ;

     for (row = 0 ; row < m ; row++)
    {
        for (col = 0 ; col < n ; col++)
        {
            printf ("Enter the value of b[%d][%d] : ", row, col);
            scanf ("%d", &b[row][col]);
        }
    }
    

    printf ("\nMATRIX B obtained will be : \n");

     for (row = 0 ; row < m ; row++)
     {
        for (col = 0 ; col < n ; col++)
        {
            printf ("%d   ", b[row][col]);
        }
        printf ("\n");
     }

     printf ("\nTranspose of MATRIX B is :-\n");

     for (row = 0 ; row < n ; row++)
     {
        for (col = 0 ; col < m ; col++)
        {
            printf ("%d   ", b[col][row]);
        }
        printf ("\n");
     }

     if (i == m && j == n)
     {
        printf ("\nwe can apply operations in both natrices.\n");

        printf ("\nAddition of the MATRIX A and MATRIX B is : \n");

     for (row = 0 ; row < i ; row++)
     {
        for (col = 0 ; col < j ; col++)
        {
            sum = a[row][col] + b[row][col];
            printf ("%d   ", sum);
        }
        printf ("\n");
     }

     printf ("\nSubtraction of the MATRIX A and MATRIX B is : \n");
     
     for (row = 0 ; row < i ; row++)
     {
        for (col = 0 ; col < j ; col++)
        {
            sub = a[row][col] - b[row][col];
            printf ("%d   ", sub);
        }
        printf ("\n");
     }

     printf ("Multiplication of MATRIX A and MATRIX B is : \n");
            for (row = 0 ; row < i ; row++)
            {
                for (col = 0 ; col < n ; col++)
                {
                    sum = 0;
                    for (k = 0 ; k < i ; k++)
                    {
                        sum = sum + a[row][k] * b[k][col];
                    }
                    printf ("%d   ", sum);
                }
                printf ("\n");
            }

     printf ("\nMATRIX A and MATRIX B can be compared.\n");

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

     else if (j == m)
     {
        printf ("Multiplication of MATRIX A and MATRIX B is : \n");
            for (row = 0 ; row < i ; row++)
            {
                for (col = 0 ; col < n ; col++)
                {
                    sum = 0;
                    for (k = 0 ; k < i ; k++)
                    {
                        sum = sum + a[row][k] * b[k][col];
                    }
                    printf ("%d   ", sum);
                }
                printf ("\n");
            }
     }

     else 
     {
        printf ("order of matrices are not same so we can not apply operations in matrices");
     }
    return 0;
}