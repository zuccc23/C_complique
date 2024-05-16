//calculate time with pointers 
#include <stdio.h>
#include<stdlib.h>

int horloge (int *h, int *min);


int main ()
{

int heure , minute ;
heure = 0;
minute = 129;

horloge (&heure, &minute);

printf("il est %d heures et %d minutes\n", heure, minute);

return 0;
}

int horloge (int *h,int *min)
{
	*h = *min/60;
	*min %=60;
	return 0;
}




