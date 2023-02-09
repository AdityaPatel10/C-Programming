#include <stdio.h>
int main( )   {
    int arr[5] = {1,2,1,3,2};
    printf ("Duplicate array :-\n");
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = i + 1 ; j < 5 ; j++)
        {
            if (arr[i] == arr[j])
            {
                printf ("Yes it contains a duplicate numbers.");
                break;
            }
        }
    }
  //  printf ("%d", length);
    return 0;
}