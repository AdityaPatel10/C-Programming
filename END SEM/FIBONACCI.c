#include <stdio.h>
int main () {
    int f1 = 0 , f2 = 1 , f3 = 0 , num;
    printf ("Enter the number : ");
    scanf ("%d", &num);
    printf (" %d %d ", f1, f2);
    for (int i = 2 ; i < num ; i++)
    {
        f3 = f1 + f2;
        printf (" %d ", f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}