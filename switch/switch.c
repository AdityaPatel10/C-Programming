#include <stdio.h>
#include <math.h>
int main ()   {
    int num, n;
    double x, y, z;
    printf ("MENU:-\n1.) For checking number is even or odd.\n");
    printf ("2.) For checking number is positive or negative.\n");
    printf ("3.) For printing square of the number.\n");
    printf ("4.) For pr3inting squareroot of the number.\n");
    printf ("Enter a number from '1 to 4' for applying an operation: ");
    scanf ("%d",& n);
    switch(n)  {
        case 1:
        printf ("Enter a number for analyzing either the number is even or odd: ");
        scanf ("%d", &num);
        if (num%2 == 0)  {
            printf ("%d is even number.",num);
        }
        else  {
            printf ("%d is odd number.",num);
        }
        break;
        case 2:
        printf ("Enter a number for analyzing either the number is positive or negative ");
        scanf ("%lf", &x);
        if (x > 0)
        {
            printf ("%.0lf is positive integer.",x);
        }
        else  {
            printf ("%.0lf is negative integer.",x);
    
        }
        break;
        case 3:
        printf ("Enter a number for finding square: ");
        scanf ("%lf", &y);
        printf ("Square of %.0lf is %.2lf.", y, y*y);
        break;
        case 4:
        printf ("Enter a number for finding squareroot: ");
        scanf ("%lf", &z);
        printf ("Squareroot of %.0lf is %.2lf.", z, sqrt(z));
        break;
        default:
        printf ("ERROR!!!");
    }
    return 0;
}