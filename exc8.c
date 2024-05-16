//same thing as exc9 but without function
#include <stdio.h>
#include "learnc.h"

int main() 
{
int minou = 2;
int *pminou = &minou ;
*pminou *=2;

printf("double minou is %d\n", *pminou);

return 0;
}
