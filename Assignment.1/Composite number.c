#include <stdio.h>
int main ()  {
    int m, n, count = 0;

    printf ("Enter the value of m: ");
    scanf ("%d", &m);
    printf ("Enter the value of n: ");
    scanf ("%d", &n);
    for (int i = m; i <= n; i++){
        
        count = 0;
        for (int j = 1; j <= n; j++){
            
            if (i % j == 0){
                count++;
            }
            if (count > 2){
                printf ("%d ", i);
                break;
            }
        }
        }
        return 0;
    }