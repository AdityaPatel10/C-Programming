#include <stdio.h>
void hello();      //FUNCTION DECLARATION
void bye();
int main ()   {
    hello();           //FUNCTION CALL  
    bye();
    bye();
    hello();
    bye();
    return 0;
}
void hello()           //FUNCTION DEFINATION
{
    printf ("Hello doston!!\n");
}
void bye()
{
    printf ("Tata doston :)\n");
}