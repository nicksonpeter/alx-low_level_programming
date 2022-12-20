#include "main.h"

/**
 * _strcpy - fuction that copies string
 * @dest: copy to
 * @src: copy from
 * return: string
 */
char *_strcpy(char *dest, char *src)
{
	int var = 0, var1 = 0;

	while (*(src + 1) != '\0')
	{
		var++;
	}

	for ( ; var1 < var; var1++)
	{
		dest[var1] = src[var1];
	}

	dest[var] = '\0';
	return (dest);
}
