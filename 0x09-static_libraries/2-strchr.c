#include "main.h"

/**
 * _strchr - locates character
 * @s: the string
 * @c: the search character
 * Return: @c and all remaining characters
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return ('\0');
}
