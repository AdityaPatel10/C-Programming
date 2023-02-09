#include <stdio.h>
int main ()    {
    int x;
    char y;
    float z;
    double a;
    printf ("size of int is %lu bytes\n",sizeof(x));
    printf ("size of char is %lu bytes\n",sizeof(y));
    printf ("size of float is %lu bytes\n",sizeof(z));
    printf ("size of double is %lu bytes",sizeof(a));
    return 0;
    }