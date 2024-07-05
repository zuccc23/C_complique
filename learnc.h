#ifndef learnc
#define learnc

#include<stdio.h>
#include<stdlib.h>
#include "test.h"

void print_tableint(int table[], int number );


void print_tableint(int table[], int number )
{
	int i=0;
	for (i=0;i<number; i++)
	{
		printf("%d\n", table[i]);
	}
}

#endif
