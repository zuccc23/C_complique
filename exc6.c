// guess the right number
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main ()
{

int given = 0;
srand(time(NULL)) ;
int number1 = (rand()%100)+1;

while (!(given==number1))
{
	printf("can you guess the number?\n");
	scanf("%d",&given);
	if (given>number1)
	{
		printf("too big\n");
	}

	else if (given<number1)
	{
		printf("too small\n");
	}
	else 
	{
		printf("correct!\n");
	}
}


return 0;

}



