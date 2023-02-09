#include <stdio.h>
typedef struct computer_science_engineering_student {      //typedef is used to give alias (nickname) to our data type..
    int roll;
    char name[100];
    float cgpa;
} cse;
int main ()   {

    cse s1 = {543 , "Aditya" , 9.6};
    cse s2 = {482 , "Divyanshi" , 9.7};
    cse s3 = {918 , "Arneet" , 9.8};

    printf ("Student name is : %s\n", s1.name);
    printf ("Student UID is : %d\n", s1.roll);
    printf ("Student CGPA is : %f\n", s1.cgpa);

    printf ("Student name is : %s\n", s2.name);
    printf ("Student UID is : %d\n", s2.roll);
    printf ("Student CGPA is : %f\n", s2.cgpa);

    printf ("Student name is : %s\n", s3.name);
    printf ("Student UID is : %d\n", s3.roll);
    printf ("Student CGPA is : %f\n", s3.cgpa);
    
    return 0;
}