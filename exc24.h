#include<stdio.h>
#include<stdlib.h>

typedef struct kitty kitty; // creates a type called 'kitty', which will be of type of the structure 'kitty' below
struct kitty // the structure 'kitty'
{
	int kuromi; // its variables of different types
	int pompom;
	int pocha;
};

int zero(kitty *var); //prototype of function
