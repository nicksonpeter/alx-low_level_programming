#include "main.h"

/**
 * _strncat - concactinating two string
 * @dest: input string
 * @src: input string
 * @n: inpyt value
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
