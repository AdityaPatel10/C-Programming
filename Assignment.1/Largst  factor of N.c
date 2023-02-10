#include <stdio.h>
int main ()  {
    int n =12, k=7,count=0;
    if (k < 7)
    {
    for (int i = n; i >= 1; i--)
    {
        
        if (n%i == 0)
        {
            count++;
        }
        if (count == k)
        {
            printf("%d", i);
            break;
        }
    }
    }
    else
    {
        printf ("1");
    }
    return 0;
}  