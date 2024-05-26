//chaîne de charactère
#include <stdio.h>
#include<stdlib.h>

int main()
{
char yap[20]={0};

int i=0;
printf("whats your name?\n");
for (i=0;i<20;i++)
{
	scanf("%c", &yap[i]);
	if (yap[i]=='\n')
	{
		break;
	}

}

printf("your name is %s\n", yap);

}


