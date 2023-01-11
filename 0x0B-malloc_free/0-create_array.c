#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creating array of chars
 * @size: usigned value
 * @c: the character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *var;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);

	var = (char *)(malloc(size * sizeof(char)));

	if (!var)
		return (NULL);

	while (count < size)
	{
		var[count] = c;
		count++;
	}
	return (var);
}
