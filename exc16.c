//prints users name with character chain but only if they have an eleven letter name lol
#include <stdio.h>
#include<stdlib.h>

int main()
{
char yap[11];

int i=0;
for (i=0; i<11; i++)
{
	scanf("%c", &yap[i]);
}

printf("your name is ");
int b=0;
for (b=0; b<11; b++)
{
	printf("%c", yap[b]);
}

}


