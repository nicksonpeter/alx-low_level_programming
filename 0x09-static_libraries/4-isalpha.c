#include "main.h"

/**
 * _isalpha - checking characters
 * @c: checking c
 * Return: Success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
