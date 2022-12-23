#include "main.h"

/**
 * _strcmp - compairing string
 * @s1: input char
 * @s2: input char
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i, deff;

	i = 0;
	deff = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		deff = s1[i] - s2[i];
	if (deff != '\0')
	{
		break;
	}
	i++;
	}
	return (deff);
}
