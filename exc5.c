// generate random numbers
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main ()
{

srand(time(NULL)) ; //use function time to use  a different number every second
printf("random number : %d\n", rand());
printf("random number : %d\n", rand());
printf("random number : %d\n", rand());
printf("random number : %d\n", rand());

return 0;

}
