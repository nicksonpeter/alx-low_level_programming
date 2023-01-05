#include "main.h"

/**
 * _strlen_recursion - returning the length of string
 * @s: The string
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == 0) return 0;
	else	return 1 + _strlen_recursion(s + 1);
}
