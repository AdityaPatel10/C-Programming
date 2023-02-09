


//ACCESS BY REFERENCE


#include <stdio.h>
struct employee
{
    char name[6];
    int salary;
};
//void printemp (struct employee *);
int main ( )   {
    struct employee e1;
    printf ("Enter the name :- ");
    scanf ("%s", e1.name);
    printf ("Enter salary :- ");
    scanf ("%d", &e1.salary);
    struct employee *ptr = &e1;
    printf ("%s\n", ptr->name);
    printf ("%d\n", ptr->salary);
    return 0;    
}