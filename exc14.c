//addition+moyenne avec tableau en utilisant résultat d'une autre fonction
#include <stdio.h>
#include<stdlib.h>

int plus(int tabl[], int num);
double moy(int *pom ,int num) ;

int main()
{
	int notes[7]={2,7,12,14,13,13,18};
	plus (notes,7);
	int pompom = plus (notes, 7);
	moy(&pompom, 7);
	double popy = moy(&pompom, 7);
	printf("addition of all results is %d\naverage of all results is %f\n", pompom, popy);

	
}

int plus(int tabl[], int num)
{
	int i = 0;
	int result = 0;

	for (i=0; i<num; i++)
	{
		result += tabl[i];
	}

return result;

}

double moy(int *pom ,int num)
{
	double fres=(double) *pom/ (double) num;
	return fres;
}


