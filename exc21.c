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



}


