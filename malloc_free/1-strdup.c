#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)

	{

	if (str == NULL)

	{
		return (NULL);
	}


	size_t len = strlen(str);


	char *dup = (char *)malloc((len + 1) * sizeof(char));


	if (dup == NULL)

	{
		return (NULL);
	}

	strcpy(dup, str);


	return (dup);
}
