#include "main.h"

/**
 * _strncpy - copying the string
 * @dest: copy to
 * @src: copy from
 * @n: input value
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
