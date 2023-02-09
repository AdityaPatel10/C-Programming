#include <stdio.h>
int main ()     {
    int a = 0;
    char name[100];

    printf ("Enter a name for printing its ASCII number : ");
    scanf ("%s", &name );
    while (name[a] != '\0')

    {
        printf ("The ASCII value of %c is : %d\n", name[a], name[a]);
        a++;
    }
    
    return 0;
}