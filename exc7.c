//calculate mins in hours 
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main ()
{

 int heure=0 , minute=0 ;
minute = 55 ;
heure = minute/60;
minute = minute%60 ;
printf("il est %d heure et %d minutes", heure, minute);

return 0;

}

