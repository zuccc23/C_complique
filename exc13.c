//addition+moyenne avec tableau
#include <stdio.h>
#include<stdlib.h>

int plus(int tabl[], int num);
double moy(int tabl[], int num);

int main()
{
	int notes[7]={2,7,12,14,13,13,18};
	plus (notes,7);
	moy(notes,7);
	
}

int plus(int tabl[], int num)
{
	int i = 0;
	int result = 0;

	for (i=0; i<num; i++)
	{
		result += tabl[i];
	}

printf("result of addition is %d\n", result);
return 0;

}

double moy(int tabl[], int num)
{
	int res=0;
	int i=0;
	double fres=0.0;
	for (i=0; i<num; i++)
	{
		res+=tabl[i];
	}
	fres=res/num;
	printf("average is %f\n", fres);
	return 0.0;
}


