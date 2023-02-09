#include<stdio.h>
int main()  {
    char o;
    printf("enter an operator (+,-,*,/): ");
    scanf("%c",&o);
    double a,b;
    printf("enter the value of a: ");
    scanf("%lf",&a);
    printf("enter the value of b: ");
    scanf("%lf",&b);
    switch (o)  {
        case '+':
        printf("%lf + %lf = %lf",a,b,a+b);
        break;
        case '-':
        printf("%lf - %lf = %lf",a,b,a-b);
        break;
        case '*':
        printf("%lf * %lf = %lf",a,b,a*b);
        break;
        case '/':
        printf("%lf / %lf = %lf",a,b,a/b);
        break;
        default:
        printf("error!!");

    }
    return 0;
}