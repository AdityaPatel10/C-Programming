#include <stdio.h>
void swap (int , int);
void swapx (int* , int*);
int main ()  {
    int x, y;
    printf ("Enter the value of x and y : ");
    scanf ("%d      %d", &x, &y);
    swap(x , y);
    printf ("x = %d , y = %d\n", x, y);
    swapx(&x , &y);
    printf ("x = %d , y = %d", x, y);    
    return 0;
}
  // CALL BY VALUE..

void swap(int x , int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf ("Swapped value will be :\na = %d , b = %d\n", x, y);
}
//CALLL BY REFRENCE..

void swapx (int*a , int*b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf ("Swapped value will be : \na = %d , b = %d\n", *a, *b);
}