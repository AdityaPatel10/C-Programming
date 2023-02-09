#include <stdio.h>
int main ()   {
    int n, sum = 0, r, on ;      //on = original_number , n = number, r = remainder 

    printf ("Enter a three digit number : ");
    scanf ("%d", &n);
    on = n;
    while (on != 0)  {
        r = on % 10;
        sum += r * r * r;
        on /= 10;
    }
    if (sum == n)
            printf ("%d is an armstrong number. ", n);

    else
            printf ("%d is not an armstrong number. ", n);
            return 0;
}