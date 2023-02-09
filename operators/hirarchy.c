#include<stdio.h>
int main()  {
	int a,b;
printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	int sum=a+b;
	int sub=a-b;
	int multiple=a*b;
	int division=a/b;
	int module=a%b;
	printf("sum of %d and %d is %d\n",a,b,sum);
	printf("sub of %d and %d is %d\n",a,b,sub);
	printf("multiple of %d and %d is %d\n",a,b,multiple);
	printf("division of %d and %d is %d\n",a,b,division);
	printf("module od %d and %d is %d\n",a,b,module);
	return 0;
}
