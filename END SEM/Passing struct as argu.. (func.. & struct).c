

//PASS STRUCTURE AS ARGUMENT


#include <stdio.h>
#include <string.h>
struct student {
    int roll;
    float marks;
    char name[6];
};
void printstu (struct student);
int main ()   {
    struct student s1;
    s1.roll = 11543;
    s1.marks = 99.9;
    strcpy (s1.name , "Aditya");
    printstu (s1);
    return 0;
}
void printstu (struct student s)
{
    printf ("Student name : %s\n", s.name);
    printf ("Student roll number : %d\n", s.roll);
    printf ("Student marks : %.2f\n", s.marks);
}