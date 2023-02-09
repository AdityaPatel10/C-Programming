#include <stdio.h>
void hello (int count);
int main ()   {
    int count;
     printf ("Enter the value of count : ");
     scanf ("%d", &count);
     hello(count);
     return 0;
}
void hello (int count)
{
    if (count == 0)
    {
        return ;
    }
    printf ("Hey Beautifull !! :-)\n");
    hello(count - 1);
}