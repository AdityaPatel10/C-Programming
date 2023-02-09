#include<stdio.h>
int main()  {
	int year;
	printf("year: ");
	scanf("%d",&year);
	if(year%400==0 || year%4==0)
	{
	printf("%d year is leap year",year);
    }
    else if(year%100==0)
    {
    printf("%d is not a leap year",year);
    }
    else
	{
    printf("%d is not a leap year",year);
	}
	return 0;
	}