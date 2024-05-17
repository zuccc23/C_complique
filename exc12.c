//reset+set to01234 + use function 
#include <stdio.h>
#include<stdlib.h>


int affiche(int*tabl);

int main ()
{
int i = 0;int b =0;
int poyo[5];

for ( i=0; i<5; i++)
{
	poyo[i]=0;
}

for ( i=0; i<5; i++)
{
	poyo[i]=b;
	b++;
}
affiche(poyo);


}

int affiche(int *tabl)
{
	int i=0;
	for (i=0; i<5; i++)
{
	printf("%d\n", tabl[i]);
}
return 0;
}


