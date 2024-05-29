//THE CAT AGE CALCULATOR HEHEHEHHEHE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "learnc.h"
void calc_cat(int catage[]);

int main()
{
int cat_age[39]={0};

calc_cat(cat_age);
//print_tableint(cat_age,39);

int age =0;
printf("how old is your kitty?\n");
scanf("%d", &age);

if (age<39)
{
	printf("your cat is %d years old in human years\n", cat_age[age]);
}

else
{
	printf("aint no way your cat is this old, lyin ass\n");
}

}



void calc_cat(int catage[])
{
	catage[0]=0;
	catage[1]=18;
	catage[2]=24;

	int i;
	for (i=3; i<39; i++)
	{
		int p = i-1;
		catage[i]=catage[p]+4;
	}


}
