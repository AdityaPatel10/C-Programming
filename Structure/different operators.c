#include <stdio.h>
struct student {
    int roll;
    char name[100];
    float cgpa;
};
int main ()   {
    //NORMAL FORM
    struct student s1 = {543 , "Aditya" , 9.6};
    struct student s2 = {482 , "Divyanshi" , 9.7};
    struct student s3 = {918 , "Arneet" , 9.8};

    printf ("Student name is : %s\n", s1.name);
    printf ("Student UID is : %d\n", s1.roll);
    printf ("Student CGPA is : %f\n", s1.cgpa);

    printf ("Student name is : %s\n", s2.name);
    printf ("Student UID is : %d\n", s2.roll);
    printf ("Student CGPA is : %f\n", s2.cgpa);

    printf ("Student name is : %s\n", s3.name);
    printf ("Student UID is : %d\n", s3.roll);
    printf ("Student CGPA is : %f\n", s3.cgpa);
    //POINTER!!!
    struct student *ptr = &s1;
   // ptr = &s1;                    both format are correct
    printf ("student.roll : %d\n", (*ptr).roll);               //dot operator
    printf ("student->name : %s\n", ptr->name);           //arrow operator
    printf("student->roll : %d\n", ptr->roll);
    printf ("student->cgpa : %f\n", ptr->cgpa);
    printinfo (s3);
    //USING FUNCTION 

    return 0;
}