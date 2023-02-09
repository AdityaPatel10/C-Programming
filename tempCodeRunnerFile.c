#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};                    //Array of size 5
//declaring pointer variable to store address of other variables.
int *ptr1=a;      
int *ptr2=a+4;                       //adress of a + 4 * adress of data type
printf("A=%d\n",*(ptr1+1));
printf("B=%d",(ptr2-ptr1));
return 0;
}