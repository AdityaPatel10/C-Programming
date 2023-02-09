#include <stdio.h>
int main( )   {
    int fact = 0;
    int arr[5] = {1,2,4,3,5};
    printf ("Duplicate array :-\n");
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = i + 1 ; j < 5 ; j++)
        {
            if (arr[i] == arr[j])
            {
                fact = 1;
                break;
            }
        }
    }
    if (fact == 1)
    {
        printf ("Yes it contains a duplicate numbers.");
    }
    else
    {
        printf ("no");
    }
  //  printf ("%d", length);
    return 0;
}