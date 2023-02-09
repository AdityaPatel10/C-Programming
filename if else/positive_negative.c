#include <stdio.h>
int main ()   {
    double n;
    printf("enter a number: ",n);
    scanf("%lf", &n);
    if (n == 0){
        printf("you entered 0");
    }
    else if (n < 0)  {
        printf("the number is negative");
    }
    else if(n > 0)   {
        printf("the number is positive");
    }
    else  {
        printf("error");
    }
    return 0;
}