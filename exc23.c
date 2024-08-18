//use struct
#include <stdio.h>
#include <stdlib.h>


struct ture
	{
		char fname[100] ;
		char lname[100];
		int age;
		char add[100]; 
		int student;

	};


int main()
{
struct ture svar ;

printf("First name :\n");
scanf ("%s",  svar.fname);

printf("Last name :\n");
scanf("%s", svar.lname);

printf("Age :\n");
scanf("%d", &svar.age);




printf("Identity Card :\nFirst name : %s\nLast Name : %s\nAge : %d\n",svar.fname, svar.lname, svar.age );
}






