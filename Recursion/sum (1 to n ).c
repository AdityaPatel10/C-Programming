#include <stdio.h>
int sum (int n);
int main ()   {
    int n;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);

    //sum (n);
    printf ("Sum from 1 to %d is : %d", n, sum(n));
    return 0;
}
int sum (int n)
{
    if (n == 1)
    {
        return 1;
    }
    int s = sum(n - 1);
    int tsum = s+ n;
    return tsum;
}