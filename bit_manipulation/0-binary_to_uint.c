#include "main.h"
#include <string.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, weight = 1;
	int i, len;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return(0);
			
		if (b[i] == '1')
			sum = sum + weight;
		weight = weight * 2;
	}

	return (sum)
}