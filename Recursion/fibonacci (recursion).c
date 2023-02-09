#include <stdio.h>
void printfib (int);
int main ( )    {
    int n;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    printf ("Fibonacci series :-");
    printf ("%d  %d  ", 0, 1);
    printfib(n - 2);
    return 0;
}
void printfib (int a)
{
    static int f1 = 0, f2 = 1, f3 = 0;
    if (a > 0) {
    f3 =f1 + f2;
    printf ("%d  ", f3);
    f1 = f2;
    f2 = f3;
    printfib(a - 1);
    }
}