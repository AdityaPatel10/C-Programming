#include <stdio.h>
#include <string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main ()   {
    struct student ece[10];
    ece[0].roll = 1;
    ece[0].cgpa = 9.8;
    strcpy (ece[0].name , "Aditya");

    printf ("Student name : %s\n", ece[0].name);
    printf ("%s's Roll Number : %d\n", ece[0].name, ece[0].roll);
    printf ("%s's CGPA : %f\n", ece[0].name , ece[0].cgpa);

    ece[1].roll = 2;
    ece[1].cgpa = 9.7;
    strcpy (ece[1].name , "Arneet");

    printf ("Student name : %s\n", ece[1].name);
    printf ("%s's Roll Number : %d\n", ece[1].name, ece[1].roll);
    printf ("%s's CGPA : %f\n", ece[1].name , ece[1].cgpa);

    ece[2].roll = 3;
    ece[2].cgpa = 9.6;
    strcpy (ece[2].name , "Divyanshi"); 

    printf ("Student name : %s\n", ece[2].name);
    printf ("%s's Roll Number : %d\n", ece[2].name, ece[2].roll);
    printf ("%s's CGPA : %f\n", ece[2].name , ece[2].cgpa);
    return 0;
}