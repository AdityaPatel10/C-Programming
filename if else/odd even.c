#include<stdio.h>
int main()
{
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    if (num%2==0)
    printf("%d is even",num);
    if (num == 0)
    printf("you entered 0",num);
   
    else
  printf("%d is odd",num);
    return 0;
}
