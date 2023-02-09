#include <stdio.h>
int main ()    {
    int n = 3;
    int *ptr = &n;
    int **pptr = &ptr;

    printf ("%d\n", **pptr);
    return 0;
}