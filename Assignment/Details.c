#include <stdio.h>
//A variable student declaration with structure declaration.
    struct student {      
    //declaring members of structure
    char Name[50];
    int age;             
   float marks; 
};               
int main(){
struct student s1,s2;   //declaration of variable s1 & s2
printf("enter details of s1");
//read name , age and marks of student s1  
scanf("%s %d %f", s1.Name, &s1.age, &s1.marks);   
//print name, age and marks of student s1 using dot operator(.)
printf("%s %d %f", s1.Name, s1.age, s1.marks);  
}
