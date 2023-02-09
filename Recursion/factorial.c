#include <stdio.h>
int fac (int n);
int main ()  {
    int n ;
    printf ("Enter the valuie of n : ");
    scanf ("%d", &n);

    fac (n);

    printf ("Factorial of %d is : %ld", n, fac(n));
}
int fac (int n)
{
    if (n == 1)     //BASE CASE
    {
        return 1;
    }
    int f = n*fac (n - 1);
   // int tfac = f * n;
    return f;
}