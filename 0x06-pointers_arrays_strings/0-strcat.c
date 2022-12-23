#include "main.h"

/**
 * _strcat - concatenating strings
 * @dest: input value
 * @src: input value
 * return: string
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest);
}
