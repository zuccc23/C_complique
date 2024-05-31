//THE CAT AGE CALCULATOR HEHEHEHHEHE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "learnc.h"
void calc_cat(int catage[]); //prototype

int main()
{
int cat_age[39]={0}; //set table to 39 slots cuz cats cant be that old

calc_cat(cat_age);//call the function


int age =0;
printf("how old is your kitty?\n");
scanf("%d", &age); //get the cats age from user

if (age<39)
{
	printf("your cat is %d years old in human years\n", cat_age[age]);
} //print table depending on age given by user

else
{
	printf("aint no way your cat is this old, lyin ass\n");
}

}



void calc_cat(int catage[])
{
	catage[0]=0;
	catage[1]=18;
	catage[2]=24; //setting early cat ages

	int i;
	for (i=3; i<39; i++)
	{
		int p = i-1;
		catage[i]=catage[p]+4;
	} /*function that adds 4 each year cuz thats how cat age to human age is calculated apparently*/


}
