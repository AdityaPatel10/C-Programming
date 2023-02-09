#include <stdio.h>
int main ()  {
    int r, c, i, j, m, n, num, add = 0, sub =0, x, k, sum = 0 ;
    printf ("Enter the number of rows of MATRIX A : ");
    scanf ("%d", &r);
    printf ("Enter the number of coloumns of MATRIX A : ");
    scanf ("%d", &c);

    int a[r][c] ;

    for (i = 0 ; i < r ; i++)
    {
        for (j = 0 ; j < c ; j++)
        {
            printf ("Enter the value of a[%d][%d] : ", i, j);
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\nMATRIX A obtained is : \n");

    for (i = 0 ; i < r ; i++)
    {
        for (j = 0 ; j < c ; j++)
        {
            printf ("%d   ", a[i][j]);
        }
        printf ("\n");
    }

    printf ("Enter the number of rows of MATRIX B : ");
    scanf ("%d", &m);
    printf ("Enter the number of coloumns of MATRIX B : ");
    scanf ("%d", &n);

    int b[m][n] ;

    for (i = 0 ; i < m ; i++)
    {
        for (j = 0 ; j < n ; j++)
        {
            printf ("Enter the value of b[%d][%d] : ", i, j);
            scanf ("%d", &b[i][j]);
        }
    }
    printf ("\nMATRIX B obtained is : \n");

    for (i = 0 ; i < m ; i++)
    {
        for (j = 0 ; j < n ; j++)
        {
            printf ("%d   ", b[i][j]);
        }
        printf ("\n");
    }
    

    if (r == m && c == n)
    {
        printf ("MENU :- \npress number given below for following operation.\n");
        printf ("1.) For adding MATRIX A and MATRIX B.\n");
        printf ("2.) For subtracting MATRIX A and MATRIX B.\n");
        printf ("3.) For finding transpose of an matrix\n");
        printf ("4.) For finding multiplication of MATRIX A and MATRIX B.\n");
    }
    else if (r != c && c == m)
    {
        printf ("MENU :- \npress number given below for following operation.\n");
        printf ("3.) For finding transpose of an matrix\n");
        printf ("4.) For finding multiplication of MATRIX A and MATRIX B.\n");
    }
    else 
    {
        printf ("MENU :- \npress number given below for following operation.\n");
        printf ("3.) For finding transpose of an matrix\n");   
    }

    scanf ("%d", &num);
    switch (num)
    {
        case 1 :
            printf ("the addition of MATRIX A and MATRIX B is : \n");

             for (i = 0 ; i < r ; i++)
             {
                for (j = 0 ; j < c ; j++)
                {
                    add = a[i][j] + b[i][j] ;
                    printf ("%d   ", add);
                }
                printf ("\n");
             }
        break;

        case 2 :
            printf ("the subtraction of MATRIX A and MATRIX B is : \n");

             for (i = 0 ; i < r ; i++)
             {
                for (j = 0 ; j < c ; j++)
                {
                    sub = a[i][j] - b[i][j] ;
                    printf ("%d   ", sub);
                }
                printf ("\n");
             }
        break;

        case 3 :
        printf ("MENU :- \n press number given below for following operation.\n");
        printf ("1.) For finding tranpose of MATRIX A.\n2.) For finding tranpose of MATRIX B.");
        scanf ("%d", &x);
         switch (x)
         {
            case 1 : 
            printf ("Transpose of MATRIX A is : \n");
            for (i = 0 ; i < c ; i++)
            {
                for (j = 0 ; j < r ; j++)
                {
                    printf ("%d   ", a[j][i]);
                }
                printf ("\n");
            }
            break;

            case 2 :
            printf ("Transpose of MATRIX B is : \n");
            for (i = 0 ; i < n ; i++)
            {
                for (j = 0 ; j < m ; j++)
                {
                    printf ("%d   ", b[j][i]);
                }
                printf ("\n");
            }
            break;
            default :
            printf ("Entered number doesn't exist.");
         }
        break;

        case 4 :
            printf ("Multiplication of MATRIX A and MATRIX B is : \n");
            for (i = 0 ; i < r ; i++)
            {
                for (j = 0 ; j < n ; j++)
                {
                    sum = 0;
                    for (k = 0 ; k < r ; k++)
                    {
                        sum = sum + a[i][k] * b[k][j];
                    }
                    printf ("%d   ", sum);
                }
                printf ("\n");
            }
        break;
        default :
        printf ("Entered number doesn't exist.");
    }
    return 0 ;
}