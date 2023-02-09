

//ACCESS STRUCTURE FROM MEMBERS


#include <stdio.h>
#include <string.h>
struct student {
    int roll;
    float marks;
    char name[6];
};
void printstu (int , float);
int main ()   {
    struct student s1;
    s1.roll = 11543;
    s1.marks = 99.9;
    strcpy (s1.name , "Aditya");
    printf ("Student name : %s\n", s1.name);
    printstu (s1.roll , s1.marks);
    return 0;
}
void printstu (int r , float m)
{
    //printf ("Student name : %s\n", s.name);
    printf ("Student roll number : %d\n", r);
    printf ("Student marks : %.2f\n", m);
}