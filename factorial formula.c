#include <stdio.h>

int main()
{
	float x, sum, row;
	int i, n;
	printf ("Enter the value of x : ");
	scanf ("%f", &x);
	printf ("Enter the value of  number of terms : ");
	scanf ("%d", &n);
	sum = 1 ;
	row = 1;
	for (i = 1 ; i < n ; i++)
	{
	  row = row*x /(float) i;
	  sum = sum + row;
	}
	printf("The sum  is : %f", sum);
	return 0 ;
} 
