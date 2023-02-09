#include <stdio.h>
#include <string.h>
struct address {
    int house_no;
    int block;
    char city[100];
    char name[100];
    char state[100];
};
void printadd (struct address);
int main ()   {
    struct address a[5];

    printf ("Enter information of 1 st person : ");
    scanf ("%d %d %s %s %s", &a[0].house_no, &a[0].block, a[0].name, a[0].city, a[0].state);

    printf ("Enter information of 1 st person : ");
    scanf ("%d %d %s %s %s", &a[1].house_no, &a[1].block, a[1].name, a[1].city, a[1].state);

    printf ("Enter information of 1 st person : ");
    scanf ("%d %d %s %s %s", &a[2].house_no, &a[2].block, a[2].name, a[2].city, a[2].state);

    printf ("Enter information of 1 st person : ");
    scanf ("%d %d %s %s %s", &a[3].house_no, &a[3].block, a[3].name, a[3].city, a[3].state);

    printf ("Enter information of 1 st person : ");
    scanf ("%d %d %s %s %s", &a[4].house_no, &a[4].block, a[4].name, a[4].city, a[4].state);

    printf ("\n\nBY NORMAL FORM :-\n\n");

    printf ("Name : %s\n", a[0].name);
    printf ("State : %s\n", a[0].state);
    printf ("City : %s\n", a[0].city);
    printf ("House Number : %d\n", a[0].house_no);
    printf ("Block : %d\n", a[0].block);

    printf ("Name : %s\n", a[1].name);
    printf ("State : %s\n", a[1].state);
    printf ("City : %s\n", a[1].city);
    printf ("House Number : %d\n", a[1].house_no);
    printf ("Block : %d\n", a[1].block);

    printf ("Name : %s\n", a[2].name);
    printf ("State : %s\n", a[2].state);
    printf ("City : %s\n", a[2].city);
    printf ("House Number : %d\n", a[2].house_no);
    printf ("Block : %d\n", a[2].block);

    printf ("Name : %s\n", a[3].name);
    printf ("State : %s\n", a[3].state);
    printf ("City : %s\n", a[3].city);
    printf ("House Number : %d\n", a[3].house_no);
    printf ("Block : %d\n", a[3].block);

    printf ("Name : %s\n", a[4].name);
    printf ("State : %s\n", a[4].state);
    printf ("City : %s\n", a[4].city);
    printf ("House Number : %d\n", a[4].house_no);
    printf ("Block : %d\n", a[4].block);

    printf ("\n\nUSING FUNCTIONS :-\n\n");

    printadd (a[0]);
    printadd (a[1]);
    printadd (a[2]);
    printadd (a[3]);
    printadd (a[4]);

    return 0;
}
void printadd (struct address a)
{
    printf ("Name : %s\n", a.name);
    printf ("State : %s\n", a.state);
    printf ("City : %s\n", a.city);
    printf ("House Number : %d\n", a.house_no);
    printf ("Block : %d\n", a.block);   
}