#include <stdio.h>
#include <math.h>
void square(int);
int main ()   {
    int n;
    printf ("Enter a number for finding square : ");
    scanf ("%d", &n);

    square(n);
    return 0;
}
void square (int n)
{
   // int p = pow(n,2);
    printf ("Square of %d is : %f\n", n, pow (n, 2));
}