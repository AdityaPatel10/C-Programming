#include <stdio.h>
// FOR PRINTING LENGTH OF THE STRING.
int strlength (char *str)
{   
    int i;
    for (i = 0 ; str[i] != '\0' ; i++);
    return i;
}
// FOR COPYING THE STRING.
int strcopy (char *str1 , char *str)
{
    int i;
for(i = 0 ; str[i] != '\0' ; i++)
    {
        str1[i] = str[i];
    }
    str1[i] = '\0';
    return *str1;   
}
// FOR CONCATNATED STRING.
int strconcat (char *str1 , char *str2)
{
    int i, j, n = 0;
  
    for (i = 0 ; str1[i] != '\0' ; i++)
    {
        n++;                                   // n = length
    }
   for (j = 0 ; str2[j] != '\0' ; j++)
    {
            str1[n + j] = str2[j];
        }
    str1[n + j] = '\0';
    return *str1;
}
// FOR REVERSING THE STRING.
int strreverse (char *str) 
{
    int i, n ;
 for (i = 0 ; str[i] != '\0' ; i++)
    {
        n++;
    }       
    printf ("Reversed string is : ");
    for(n = i-1 ; n >= 0 ; n--)
    {
        printf ("%c", str[n]);
    }
}
// FOR UPPER CASE .
int strucase (char *str)
{
    int i;
    for (i = 0 ; str[i] != '\0' ; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    return *str;
}
// FOR LOWER CASE.
int strlcase (char *str)
{
    int i;
    for (i = 0 ; str[i] != '\0' ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return *str;
}
// FOR COMPARISION OF STRING.
int strcompare (char *str , char *str1)
{
    int i, n = 0, m = 0, flag = 0;
for (i = 0 ; str[i] != '\0' ; i++)
    {
        n++;
    }
    for (i = 0 ; str1[i] != '\0' ; i++)
    {
        m++;
    }
    if (n == m)
    {
       for (i = 0 ; i <= n ; i++)
       {
         if (str[i] != str1[i])
        {
            flag = 1;
            break;
        }
       }
       if (flag == 0)
       {
        return 0;
       }
       else 
       {
        return 1;
       }
    }
    else 
    {
        return 1;
    }
}
int main ()   
{
    char str [1000] , str1[1000] , str2[1000];
    printf ("Enter string : ");
    scanf ("%s", &str);
   
    //strlength (str)
    printf ("Length of the string is : %d\n", strlength (str));
    strcopy (str1 , str);
    printf ("Copied string is : %s", str1);
    printf ("\nEnter string 1: ");
    scanf ("%s", &str1);
    printf ("\nEnter string 2 : ");
    scanf ("%s", &str2);
    strconcat (str1 , str2);
    printf ("\nConcatenated string is : %s\n", str1);

    printf ("Reversed string is : %s\n", strreverse (str));
    printf ("Enter string : ");
    scanf ("%s", &str);
    strucase (str);
    printf ("Uppercase string : %s\n", str);
    strlcase (str1);
    printf ("Lowercase string : %s\n", str1);
    strcompare (str , str1);
    return 0;
}