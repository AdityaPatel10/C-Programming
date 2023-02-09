#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()   { 
    char *ptr;
    int n, i;
    printf ("Enter the size of an string : ");
    scanf ("%d", &n);
    ptr = (char*)malloc(n * sizeof(char));
    if (ptr  == NULL)
    {
        printf ("Memory Allocation Failed.\n");
        exit (1);
    }
    printf ("Size of memory is %d\n", _msize(ptr));
   // printf ("Enter string 1 : ");
    //scanf ("%s", ptr);
    strcpy (ptr , "Aditya");
    printf ("String entered is : %s\n", ptr);
    printf ("Enter the new size of string : ");
    scanf ("%d", &i);
    ptr = (char*)realloc(ptr, i * sizeof(char));
    if (ptr == NULL)
    {
        printf ("Reallocation Failed.\n");
        exit (1);
    }
    printf ("Memory size modified.\n");
    printf ("Memory have string : %s\n", ptr);
    printf ("Memory size updated to : %d\n", _msize(ptr));
    strcpy (ptr , "Aditya patel");

    printf ("New string formed is : %s\n", ptr);
    free (ptr);
    return 0;
}