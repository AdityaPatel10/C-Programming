#include <stdio.h>
int main ()   {
    int a = 10, *ptr;
    ptr = &a;

    // PRINTING ADDRESS OF THE VARIABLES..

    
    printf ("%p\n", &a);
    printf ("%u\n", &a);

    printf ("%u\n", ptr);
    
    printf ("%u\n", &ptr);

    //PRINTING THE VALUE OF A ...


    printf ("%d\n", a);
    printf ("%d\n", *ptr);
    printf ("%d\n", *(&a));
    return 0 ;
}