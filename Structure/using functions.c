    #include <stdio.h>
    struct student {
        int roll;
        char name[100];
        float cgpa;
    };

    void printinfo (struct student s1);
    void printinfo1 (struct student s2);
    void printinfo2 (struct student s3);

    int main ()
    {
    struct student s1 = {543 , "Aditya" , 9.6};
    struct student s2 = {482 , "Divyanshi" , 9.7};
    struct student s3 = {918 , "Arneet" , 9.8};

    printinfo (s1);
    printinfo1 (s2);
    printinfo2 (s3);

    return 0;
    }
    void printinfo (struct student s1)
    {
    printf ("Student name is : %s\n", s1.name);
    printf ("Student UID is : %d\n", s1.roll);
    printf ("Student CGPA is : %f\n", s1.cgpa);        
    }
    void printinfo1 (struct student s2)
    {
    printf ("Student name is : %s\n", s2.name);
    printf ("Student UID is : %d\n", s2.roll);
    printf ("Student CGPA is : %f\n", s2.cgpa);

    }
    void printinfo2 (struct student s3)
    {
    printf ("Student name is : %s\n", s3.name);
    printf ("Student UID is : %d\n", s3.roll);
    printf ("Student CGPA is : %f\n", s3.cgpa);   
    }