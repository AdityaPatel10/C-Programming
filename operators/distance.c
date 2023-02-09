#include <stdio.h>
int main()
{
    float km,m,f,in,cm;
    printf("enter the distance in km: ");
    scanf("%f",&km);
    m=km*1000;
    f=km*3280.84;
    in=km*39370.1;
    cm=km*100000;
    printf("the distance in m is %f\n",m);
    printf("the distance in f is %f\n",f);
    printf("the distance in in is %f\n",in);
    printf("the distance in cm is %f\n",cm);
    return 0;
}