#include <stdio.h>
#include <string.h>
 struct student {
    int roll;
    float cgpa;
    char name[];
 };
 int main ()   {
    struct student s1;
    s1.roll = 543;
    s1.cgpa = 9.8;
    strcpy (s1.name , "Aditya");

    printf ("Student name : %s\n", s1.name);
    printf ("%s's Roll Number : %d\n", s1.name, s1.roll);
    printf ("%s's CGPA : %f\n", s1.name , s1.cgpa);

    struct student s2;
    s2.roll = 918;
    s2.cgpa = 9.8;
    strcpy (s2.name , "Arneet");

    printf ("Student name : %s\n", s2.name);
    printf ("%s's Roll Number : %d\n", s2.name, s2.roll);
    printf ("%s's CGPA : %f\n", s2.name, s2.cgpa);

    struct student s3;
    s3.roll = 482;
    s3.cgpa = 9.8;
    strcpy (s3.name, "Divyanshi");

    printf ("Student name : %s\n", s3.name);
    printf ("%s's Roll Number : %d\n", s3.name, s3.roll);
    printf ("%s's CGPA : %f\n", s3.name, s3.cgpa);

    return 0;
 }