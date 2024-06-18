//utiliser les directives de préprocesseur
#include <stdio.h>
#include <stdlib.h>

#define miaou(nb) if (nb<8)\
	printf("too young");\
	else \
	printf ("ok");

int main ()
{
miaou(4);
}
