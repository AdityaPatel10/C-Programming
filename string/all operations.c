#include<stdio.h>
#include<string.h>
int main ()   {
    int num ;
    char s1[100], s2[100] ;
    printf ("Enter the string1 : ");
    scanf ("%s", &s1);
    printf ("MENU :-\nPress an number for following operations. \n1.) Length of the string. \n2.) Copy string.\n3.) String concatenation.\n4.) Reverse string.\n5.) Uppercase string.\n6.) Lowercase string.\n7.) Comparison of string.\n");
    scanf ("%d", &num);

    switch (num)
    {
        case 1:
        printf ("Length of the string is : %d", strlen(s1));
        break;

        case 2:
        strcpy(s2,s1);
        printf ("Copied string is : %s", s2);
        break ;

        case 3:
        printf ("Enter string 2 : ");
        scanf ("%s", &s2);
        strcat (s1, s2);
        printf ("The combined string is : %s", s1);
        break;

        case 4:
        printf ("Reverse of the string is : %s", strrev(s1));
        break;

        case 5:
        printf ("The uppercase of the string is : %s", strupr(s1));
        break;

        case 6:
        printf ("The Lower Case of String is : %s", strlwr(s1));
        break;

        case 7: 
        printf ("Enter the string you wish to compare with the previous string.\n");
        scanf ("%s", s2);    
        printf("String Compare is : %d", strcmp(s1,s2));
        break;

        default :
        printf ("The number you entered is not exist.");
        break;

        return 0;

    }
}