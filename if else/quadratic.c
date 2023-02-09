#include<stdio.h>
#include<math.h>
int main ()   {
    double a, b, c, dis, root1, root2, realpart, imagpart;
    printf("enter the value of a: ");
    scanf("%lf", &a);
    printf("enter the vakue of b: ");
    scanf("%lf", &b);
    printf("enter the value of c: ");
    scanf("%lf", &c);
    dis = b*b-4*a*c;
    printf("discriminant is: %lf\n", dis);
    if (dis > 0)  {
    root1 = -b + sqrt(dis)/(2*a);
    root2 = -b - sqrt(dis)/(2*a);
    printf ("root1= %lf   root2= %lf", root1, root2);
    }
    else if (dis == 0)  {
    root1 = root2 = -b/(2*a);
    printf("root1 = root2 = %lf", root1);
    }
    else  {
    realpart= -b/(2*a);
    imagpart= sqrt(-dis)/(2*a);
    printf("root1= %lf + %lf i   root2= %lf - %lf i", realpart, imagpart);
    }
    return 0;
}