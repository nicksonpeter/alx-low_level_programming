#include "main.h"

/**
 * _memset - fills memory with const byte
 * @s: input char
 * @b: input char
 * @n: unsigned int
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
