#include <stdio.h>

struct personal {
    int date;
    int month;
    int year;
    float salary;
    char name[100];
};

int main ()   {
    struct personal p1;
    printf ("Enter the details of person 1 : \n");
    scanf ("%d %d %d %f %s", &p1.date, &p1.month, &p1.year, &p1.salary, p1.name);

    printf ("\nINFORMATION ABOUT %s :-\n", p1.name);
    printf ("Date of joining : %d/%d/%d\n", p1.date, p1.month, p1.year);
    printf ("Salary : %f\n", p1.salary);

    return 0;
}