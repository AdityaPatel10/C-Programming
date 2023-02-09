#include <stdio.h>
int main ()    {
    char c;
    printf ("enter an alphabet to check whether it is vowel or consonant: ", c);
    scanf ("%c", &c);
    char lc, uc;
    lc= (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    uc= (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if (lc || uc)
    printf("%c is vowel", c);
    else 
    printf("%c is consonant", c);
    return 0;
}