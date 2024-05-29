//calcule des moyennes random
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "learnc.h"

void getgrades(int grades[]);
double moycalc(int grades[]);


int main()
{
int notes[20];
getgrades(notes);
moycalc(notes);
printf("la moyenne est : %f\n", moycalc(notes));

//print_tableint(notes,20);

}
void getgrades(int grades[])
{
	int i =0;  
	int nbchar=0;
	srand(time(NULL));
	while (i<20)
	{
		nbchar=(rand()%20)+1;
		grades[i]=nbchar;
		i++;
	}	
}

double moycalc(int grades[])
{
	int i=0;
	int res=0;
	for (i=0; i<20;i++)
	{
		res+= grades[i];
	}
	double finres=0.0;
	finres= (double)res/20.0;
	return finres;
}

