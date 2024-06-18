#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
   
    if (n > 0)
    {
    printf("number is positive %d\n", n);
    }

    if (n == 0)
    
    {
    printf("number is zero %d\n", n);
    }

    {
    if (n < 1)

    printf("number is negative %d\n", n);
    }
    
    printf("this is my number %d\n", n);

	return (0);
}