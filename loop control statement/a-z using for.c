#include <stdio.h>
int main ()    {
    
    for (char ch = 'a' ; ch <= 'z' ; ch++)
    {
        printf ("%c\n\n", ch);
    }

    for (char c = 'A' ; c <= 'Z' ; c++)
    {
        printf ("\t%c\n\n", c);
    }
    return 0;
}