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
int notes[20]; //table w/ the grades
getgrades(notes); //call the function that assigns random number into the table
moycalc(notes);//call the function that calculates the average of all the grades
printf("la moyenne est : %f\n", moycalc(notes));

//print_tableint(notes,20);

}
void getgrades(int grades[])//set the grade table as argument
{
	int i =0;  
	int nbchar=0;
	srand(time(NULL));//assigns time(NULL) as seed for rand function
	while (i<20) //loop that assigns random numbers in the table until it reaches 20
	{
		nbchar=(rand()%20)+1; //nbchar is assigned to a random number between 1 and 20
		grades[i]=nbchar;//assign nbchar to each oh the 20 slots of the table
		i++;
	}	
}

double moycalc(int grades[]) //calc the average
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

