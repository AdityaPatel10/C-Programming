#include<stdio.h>
#include <string.h>
struct address
	{
		int pin;
		char city[10];
      int street_no;
	};
   struct employee
   {
      char name[10];
      struct address add;
   };
int main()
{
    struct employee emp;
   strcpy (emp.name , "Aditya");
	strcpy (emp.add.city , "chennai");
   emp.add.pin = 483501;
   emp.add.street_no = 411;

	
	printf("%s\n%s\n%d\n%d\n", emp.name , emp.add.city , emp.add.pin , emp.add.street_no);
	return 0;
}
