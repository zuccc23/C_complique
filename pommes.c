//menu poour choisir des pommes
#include <stdio.h>
#include <stdlib.h>
int main ()
{ 

printf("Combien veux-tu de pommes de 1 à 4 ?\n") ;
int menu = 0 ;
scanf("%d" , &menu) ;

switch(menu)
{
	case 1 :
		printf("voilà 1 pomme\n");
		break ;
	case 2 :
		printf("voilà 2 pommes\n");
		break ;
	case 3 :
		printf("voilà 32 pommes. 32 pour le prix de 3\n");
		break ;
	case 4 :
		printf("voilà 467 pommes. quoi c gratuit et t pas content?\n");
		break ;	
	default :
		printf ("t trop bien pr mes pommes c ca ?\n");
		break ;
}
	
	
	
}


