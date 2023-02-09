#include <stdio.h>
int main ()    {
    
for (int a = 5; a >= 1; a--) {

    for (int b = 5 ; b >= 1; b--)  {
        if (a < b)
        printf ("  ");
        else 
        printf ("%d ", b);
    }
        printf("\n");
}
return 0;
}