#include <stdio.h>
int fib (int);
int main ()    {
    
    printf ("%d", fib(8));
    return 0;
}
int fib (int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibm1 = fib(n - 1);
    int fibm2 = fib(n - 2);
    int fib = fibm1 + fibm2;
   // printf ("Fibonacci number up to %dth order is : %d\n", n, fib);
    return fib;
}