#include<stdio.h>
int main()  {
    unsigned char a=5,b=10;
    printf("%d\n",a&b);
    printf("%d\n",a^b);
    printf("%d\n",a|b);
    printf("%d\n",a=~a);
    printf("%d\n",a<<1);
    printf("%d\n",a>>1);
    return 0;
}
