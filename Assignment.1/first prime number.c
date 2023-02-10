#include <stdio.h>
int main (){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf ("Value are:\n");
        for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=2; j<=arr[i]; j++){
            if(arr[i]%j == 0){
                count++;
            }
        }
        if (count == 1)
        {
            printf ("Prime number is: %d\n", arr[i]);
            break;        
        }
    }
    return 0;
}