//function with pointers 
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void calcul(int *pointeur1);

int main ()
{

	int nombre = 6;
	calcul( &nombre);
	printf("le double de nombre est : %d\n",nombre );
	return 0;


}



void calcul(int *pointeur1)
{
	*pointeur1 *= 2;

}

