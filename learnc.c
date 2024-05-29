//chaîne de charactère
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "learnc.h"
void calc_cat(int catage[]);

int main()
{
int cat_age[20]={0};

calc_cat(cat_age);
print_tableint(cat_age,20);

}



void calc_cat(int catage[])
{
	catage[0]=0;
	catage[1]=18;
	catage[2]=24;

	int i;
	for (i=3; i<20; i++)
	{
		int p = i-1;
		catage[i]=catage[p]+4;
	}


}
