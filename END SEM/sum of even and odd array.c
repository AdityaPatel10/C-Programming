#include <stdio.h>

int main()

{
    int i , j, even = 0, odd = 0;
    printf("Enter the size : ");
    scanf ("%d %d", &i, &j);
    int arr[i][j];
    printf ("Enter the values : ");
    for (int a = 0 ; a < i ; a++)
    {
        for (int b = 0 ; b < j ; b++)
    {
        scanf ("%d", &arr[a][b]);
    }
}
    for (int a = 0 ; a < i ; a++)
    {
        for (int b = 0 ; b < j ; b++)
    {
        printf ("Value at arr[%d][%d] : %d\n", a, b, arr[a][b]);
    }
    }
    for (int a = 0 ; a < i ; a++)
    {
        for (int b= 0 ; b < j ; b++)
    {
        if (arr[a][b]%2 == 0)
        {
            even += arr[a][b];
        }
        else
        {
            odd += arr[a][b];
        }
    }    
    }
    printf ("Sum of even is %d\n", even);
    printf ("Sum odd is %d", odd);
return 0;

}