#include <stdio.h>
void table (int);
int main ()   {
    int n;
    printf ("Enter the value of n for printing table : ");
    scanf ("%d", &n);
    table (n);                            //n = ACTUAL PARAMETER
    table(5);
    return 0;
}
void table (int n)                   //FORMAL PARAMETER
{
    for (int i = 1 ; i <= 10 ; i++)
    {
        printf ("%d\n", n*i);
    }
}