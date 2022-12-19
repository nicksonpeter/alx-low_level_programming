#include "main.h"

/**
 * _strlen - returning the length of the screen
 * @s: the input character
 * Return: length of @s
 */

int _strlen(char *s)
{
	int count = 0;
	int len;

	for (len = 0; s[len]; len++)
	{
		if (s[len] != '\0')
			count += 1;
		else
			break;
	}
	return (count);
}

