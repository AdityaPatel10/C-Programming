#include<stdio.h>
int main()
{
	struct leader      //A variable declaration with structure declaration.
	{
    //Declaring members of structure
	char *lead;
	int born;
	};
	//The variable l1 AND l2  is declared like a normal variable
	struct leader l1 = {"AbdulKalam", 1931};   //initializing l1 
	struct leader l2 = l1;     //l2 is assigned as l1 that means both have same data
	printf("%s %d", l2.lead, l1.born);  //Accessing members of leader l1 and l2
}



/*EXPLANATION :- 1.) Structure members are accessed using dot (.) operator. 
2.) A structure is a keyword that creates user-defined data types in C.*/