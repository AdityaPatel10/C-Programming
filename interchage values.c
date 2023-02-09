#include <stdio.h>
int main ()     {

    int a = 10 , s = 2 ;

    printf ("Assigned value is:\n a = %d \n s = %d\n", a, s);

    int t = a;
    a = s;
    s = t;

    printf ("Interchanged value is:\n a = %d \n s = %d ", a, s );

    return 0;
}