#include <stdio.h> 
int main ()     {
    for (int i = 1 ; i <= 10 ; i++){
        if (i == 6 || i == 8)     {          // || this symbol indicates or gate
        continue;           //continue skips the statement
        }
        printf ("%d \n", i);
    }
    printf ("END!!!");
    
    return 0;
} 