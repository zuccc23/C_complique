//use structures with functions
#include <stdlib.h>
#include <stdio.h>
#include "learnc.h"

int main()
{
kitty star; //creating a variable 'star' of previously created type 'kitty'
zero(&star);//calling the function for the variable star 
printf("kuromi is currently %d\n", star.kuromi);
star.kuromi=9; //using the 'kuromi' variable in the type 'kitty' as the variable 'star'
printf("kuromi is now %d, and pompom is %d\n", star.kuromi, star.pompom);
}

int zero(kitty *star) //function that assigns variables of a structure to 0
{
	(*star).kuromi=0;//accessing the star.kuromi variable in a function
	star->pompom=0;//same but easie to write
return 0;
}
