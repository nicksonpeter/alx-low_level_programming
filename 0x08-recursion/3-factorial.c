#include "main.h"

/**
 * factorial - returning factorial of given number
 * @n: integer value
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n <= 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
