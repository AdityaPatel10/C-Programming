#include <stdio.h>
#include <stdlib.h>
int main ( )   {
    int n1, n2 , n3, i, *ptr;

    //MALLOC.....
    printf ("Enter the size : ");
    scanf ("%d", &n1);
    ptr = (int*) malloc(n1* sizeof(int));
    printf ("Addresses of priviously allocated memory is :-\n");
    for (i = 0 ; i < n1 ; i++)
    {
        printf ("%d\n", ptr + i);
    }
    printf ("Enter the new size : ");
    scanf ("%d", &n2); 

    //REACLLOC....
    ptr = realloc(ptr , n2*sizeof(int));
    printf ("Addresses of reallocated memory is :-\n");
    for (i = 0 ; i < n2 ; i++)
    {
        printf ("%d\n", ptr + i);
    }
    free(ptr);     //USING FREE TO FREE UP MEMORY..
    
    //CALLOC....
    printf ("Enter a new size : ");
    scanf ("%d", &n3);
    ptr = (int*) calloc(n3 , sizeof(int));
    printf ("Addresses of calloc is :-\n");
    for (i = 0 ; i < n3 ; i++)
    {
        printf ("%d\n", ptr + i);
    }
    free (ptr);
    return 0;
}