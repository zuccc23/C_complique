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

printf("your name is %s\n", yap);

}


