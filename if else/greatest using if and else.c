#include <stdio.h>
int main()  {
	int a, b , c;
printf ("enter the value of a, b and c");
scanf ("%d%d%d", &a, &b, &c);
if (a>b && a>c)
	printf("a is greatest",a);
	else if(b>a && b>c)
	printf ("b is greatest",b);
	else 
	printf ("c is greatest", c);
	return 0;
}