//chaîne de charactère
#include <stdio.h>
#include<stdlib.h>

int main()
{
char text[69] ="je m'appelle eikichi onizuka, 22ans célibataire et libre comme l'air";
int i=0;
for (i=0; i<69 ; i++ )
{
	printf("%c", text[i]);
}
printf("\n");
}
