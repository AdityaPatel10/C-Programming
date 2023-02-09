#include <stdio.h>
int main ()     {
    int l, b;
    printf ("enter the length of the rectangle: ");
    scanf ("%d", &l);
    printf ("enter the breadth of the rectangle: ");
    scanf ("%d", &b);
    int a = l * b;
    printf ("area of a rectangle= %d\n",  a);
    int p = 2  * (l + b);
    printf ("parameter of a rectangle= %d", p );
    return 0;
}