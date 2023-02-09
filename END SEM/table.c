#include <stdio.h>

int main()

{

int i,j;

 

 /* Outer loop */

   for(i=1;i<=10;i++)

{

/* Inner loop */

for(j=1;j<=10;j++)

{                          

printf("%d\t",(i*j));

}

printf("\n");

}

return 0;
}