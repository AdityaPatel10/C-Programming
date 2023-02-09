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
/*EXPLAINATION :- 
1.) When a pointer variable is declared in C, 
    there must be a unary operator (*) before its name. */
/*2.) To access the value stored in the address
    we use the unary operator (*) that returns 
    the value of the variable located at the address 
    specified by its operand. This is also called Dereferencing.*/
