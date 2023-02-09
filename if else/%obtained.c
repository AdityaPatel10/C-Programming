#include<stdio.h>
int main()  {
	float m1,m2,m3,m4,m5;
	printf("enter the marks obtained in mathematics: ");
	scanf("%f",&m1);
	printf("enter the marks obtained in physics: ");
	scanf("%f",&m2);
	printf("enter the marks obtained in chemistry: ");
	scanf("%f",&m3);
	printf("enter the marks obtained in hindi: ");
	scanf("%f",&m4);
	printf("enter the marks obtained in english: ");
    scanf("%f",&m5);
	float sum=m1+m2+m3+m4+m5;
	printf("total marks obtained: %f\n",sum);
	float per=(sum)*100/500;
	printf("percentage obtained: %f\n",per);
	if(per>=60)
	printf("first division");
	if(per<60 && per>=50)
	printf("second division");
	if(per<50 && per>=40)
	printf("third division");
	if(per<40)
	printf("fail");
	return 0;
}