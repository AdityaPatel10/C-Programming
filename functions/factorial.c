#include <stdio.h>
long int multiple (int);
int main ()   {
    int n;
    printf ("Enter a number : ");
    scanf ("%d", &n);
    printf ("Factorial of %d is %ld.", n, multiple(n));
    return 0;
}
long int multiple (int a)
{
    if (a >= 1)
    return (a*multiple(a-1));
    else 
    return 1;
}