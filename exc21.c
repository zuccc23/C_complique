/*here are some functions of the string.h library*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

// use strlen to calc length of a string
char tabl[]="ooooooNNNIIZUKAAAAA";
strlen(tabl);
printf("in the sentence %s there are %lu characters\n", tabl, strlen(tabl));

//copy a table string into another
char uchiyamada[]="virez moi onizukaaaaa";
char copyamada[45];
strcpy(copyamada, uchiyamada);
printf("%s quoi? %s\n", uchiyamada, copyamada);

//strcat to 'catenate' : put one string after another
char fuyutsuki[60]="qui a fait ca? ";
char uchiyamada1[]="ONIZUKAAAAAAAAAA";

strcat(fuyutsuki, uchiyamada1);
printf("%s\n", fuyutsuki);

//compare 2 strings
char kunio[]="je deteste onizuka";
char tomoko[]="j'aime onizuka";
char urumi[]="je deteste onizuka";

if (strcmp(kunio, tomoko)==0)
{
	printf("kunio et tomoko sont d'accord\n");
}
else
{
	printf("kunio et tomoko sont pas d'accord\n");
}

if (strcmp(kunio, urumi)==0)
{
	printf("kunio et urumi sont d'accord\n");
}
else
{
	printf("kunio et urumi sont pas d'accord\n");
}

//search a character w strchr

int main()
{
char onini[]="je m'appelle eikichi onizuka, 22ans célibataire et libre comme l'air";
char *findephrase; //pointeur ds lequel va être stocké le résultat de strchr
int leO='o';//caractère recherché
findephrase=strchr(onini, leO);//fonction qui prend la chaine et le caractère 
printf("%s\n", findephrase);//imprime le pointeur qui contient le reste du string à partir du caractère recherché
}



}


