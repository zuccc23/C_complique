#include <stdio.h>
#include "learnc.h"

int main() 
{
	int pompom=7;
	int pomdouble = pompom *2;
	int *popy = &pomdouble;
	printf("pompom's double value is %d", *popy); 
	return 0;
}
