#include<stdio.h>
//A variable student declaration using union declaration
union student{
int age;
char name[20];
};
int main(){
union student s1; //variable s1 is declared like a normal variable
printf("enter age of s1:\n");
scanf("%d",&s1.age);
printf("enter name of s1:\n");
scanf("%s",s1.name);
printf("%d %s",&s1.age,s1.name);
}
