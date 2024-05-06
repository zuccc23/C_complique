#include <stdio.h>
#include <stdlib.h>
int main ()
{ 

	int minou = 0 ;
	while (minou < 12)
	{ 
		if (minou == 1)
		{
			printf ("this year your cat is %d year old\n" , minou) ;
		}
	        else 
		{
			printf ("this year your cat is %d years old \n" , minou) ;
		} 
		minou = minou + 1  ;
	}
}
