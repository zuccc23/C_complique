//fonction pour calculer le nb de caractères d'une chaîne
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int lchaine(const char chaine[]);


int main()
{
char miaou[]={"miaouuuu"};

lchaine(miaou);
printf("la chaine %s a %d caractères\n", miaou, lchaine(miaou));
}

int lchaine(const char chaine[])
{
	int index=0;
	int nbchar=0;
	while (!(chaine[index]=='\0'))
	{
		nbchar++;
		index++;
	}
	return nbchar;

}
