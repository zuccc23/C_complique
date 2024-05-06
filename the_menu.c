//choisissez seulement salade !!!
#include <stdio.h>
#include <stdlib.h>
int main ()
{ 

int menu = 0 ;
while (!(menu == 1))
{
printf("\nMenu du jour :\n1.Salade \n2.Pastèque\n3.Rat au four\n4.Chaussure mastiquée\nFaites votre choix !\n") ;

scanf("%d" , &menu) ;

switch(menu)
{
	case 1 :
		printf("très bon choix\n");
		break ;
	case 2 :
		printf("euh.. c un peu bcp non\n");
		break ;
	case 3 :
		printf("vous n'êtes pas vacciné contre la rage dsl\n");
		break ;
	case 4 :
		printf("on n'a plus de chaussures il reste que des tongues dsl\n");
		break ;	
	default :
		printf ("c pas sur le menu clochard\n");
		break ;
}
	
}	
	
}


