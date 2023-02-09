#include <stdio.h>
int numprint(int);
int main ()   {
    int num = 1 ;
    numprint(num);
    return 0;
}
int numprint (int num)
{
    if (num <= 20)
    {
        printf ("%d\n", num);
        numprint(num + 1);
    }
}