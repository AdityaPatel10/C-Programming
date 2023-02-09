

// WE CAN CALL MUTIPLE TYM SAME FUNCTION!!!!!

#include <stdio.h>
int sum (int , int);
int sub (int , int);
int mul (int , int);
int div (int , int);
int mod(int , int);
int main ()   {
    int a, b;
    printf ("Enter the value of a : ");
    scanf ("%d",&a);
    printf ("Enter the value of b : ");
    scanf ("%d", &b);

    int s = sum (a , b);
    printf ("Sum of %d and %d is : %d\n", a, b, s);

    int q = sub (a , b);
    printf ("sub of %d and %d is : %d\n", a, b, q);

    int p = mul (a , b);
    printf ("Multiplication of %d and %d is : %d\n", a, b, p);

    int r = div (a , b);
    printf ("Division of %d and %d is : %d\n", a, b, r);

    int t = mod (a , b);
    printf ("modulus of %d and %d is : %d\n", a, b, t);

    return 0;
}
int sum (int a , int b)
{
    return (a + b);
}
int sub (int a , int b)
{
    return (a - b);
}
int mul (int a , int b)
{
    return (a * b);
}
int div (int a , int b)
{
    return (a / b);
}
int mod (int a , int b)
{
    return (a % b);
}