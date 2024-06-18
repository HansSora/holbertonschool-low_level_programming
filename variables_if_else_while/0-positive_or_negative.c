#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
   
    printf("this is my number %d\n", n);
    
    if (n > 0)
     
     printf("number is positive %d\n", n)

    if (n == 0)

    printf("number is equal %d\n", n)

    if (n < 1)

    printf("number is negative %d\n", n)

	return (0);
}