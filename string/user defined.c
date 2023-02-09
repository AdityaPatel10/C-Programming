#include <stdio.h>
int main ()  {
    int i, op, n = 0, j, m = 0;
    char str[100], s[100];
    printf ("Enter string : ");
    scanf ("%s", &str);
    printf ("MENU :-\n1.) Length of the string. \n2.) Copy string.\n3.) String concatenation.\n4.) Reverse string.\n5.) Uppercase string.\n6.) Lowercase string.\n7.) Comparison of string.\n");
    printf ("Press an number for following operations : ");
    scanf ("%d", &op);

switch (op)
{
    case 1:
    for (i = 0 ; str[i] != '\0' ; i++)
    {
        i++;
    }
    printf ("Length of the string is %d.", i);
    break;
    case 2 :

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        s[i] = str[i];
    }
    s[i] = '\0';
    printf ("Copied string 2 is : %s", s);
    break;

    case 3 :

    printf ("Enter string 2 : ");
    scanf ("%s", &s);
    for (i = 0 ; str[i] != '\0' ; i++);
    
        for (j = 0 ; s[j] != '\0' ; j++,i++)
        {
            str[i] = s[j];
        }
    str[i] = '\0';
    printf ("Concatenated string is : '%s' ", str);
    break;

    case 4 :

    for (i = 0 ; str[i] != '\0' ; i++)
    {
        n++;
    }       
    printf ("Reversed string is : ");
    for(n = i-1 ; n >= 0 ; n--)
    {
        printf ("%c", str[n]);
    }
    break;

    case 5 :

    for (i = 0 ; str[i] != '\0' ; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    printf ("String in uppercase is : %s", str);
    break ;

    case 6 :

    for (i = 0 ; str[i] != '\0' ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    printf ("String in lowercase is : %s", str);
    break;

    case 7:

    printf ("Enter string 2 : ");
    scanf ("%s", &s);
    for (i = 0 ; str[i] != '\0' ; i++)
    {
        n++;
    }
    for (i = 0 ; s[i] != '\0' ; i++)
    {
        m++;
    }
    if (n == m)
    {
       for (i = 0 ; i <= n ; i++)
       {
         if (str[i] != s[i])
        {
            printf ("Both string is not same.");
            break;
        }
        else
        {
            printf ("Both string is same.");
            break;
        }
       }
    }
    else 
    {
        printf ("Both string is not same.");
    }
    break;

    default :
    printf ("The number you entered is not exist."); 
    break;
}
return 0;
}