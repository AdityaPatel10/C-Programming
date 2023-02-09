#include <stdio.h>
int main ( )    {
    char arr[] = "Hello";
    char *ptr ;
    ptr = arr;
    for (int i = 0 ; *ptr != '\0' ; i++)
    {
        printf ("%c", *ptr);
        ptr++;
    }
    return 0;
}