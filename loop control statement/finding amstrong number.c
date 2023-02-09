#include <stdio.h>
int main ()   {
    int m, n, cur, fact, r, sum;


    printf ("Enter the value of m : ");
    scanf ("%d", &m);
    printf ("Enter the value of n: ");
    scanf ("%d", &n);

    for (int i = m ; i <= n ; i++)
    {
        cur = i;
        sum = 0;
        while (cur > 0)
        {
            fact = 1;
            r = cur % 10;
            for (int j = 1 ; j <= 3 ; j++)
            {
                fact = fact * r;
            }
            sum = sum + fact;
            cur = cur / 10;
        }
        if (sum == i) {
        printf ("%d\n", i);    }
    }
    return 0;
}