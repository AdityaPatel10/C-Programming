#include <stdio.h>
int *greatest (int *, int *);
int main ()   {
    int x , y;
    printf ("Enter the value of x : ");
    scanf ("%d", &x);
    printf ("Enter the value of y : ");
    scanf ("%d", &y);
    int *max = 0;
    printf ("greatest value is %d", *greatest(&x , &y));
    return 0;
}
int *greatest (int *x , int *y)
{
    if (*x > *y)  {
    return x;
    }
    else   {
    return y;
    }
}