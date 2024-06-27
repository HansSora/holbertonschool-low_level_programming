#include <stdio.h>

/**
 * _strcat -entry point,concat two strings
 * @dest: -holds value for output
 * @src: -holds value for output
 * Return: (ptr)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
