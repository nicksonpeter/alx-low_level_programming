#include <stdio.h>
#include "main.h"

/**
 * print_array - printing array
 * @a: input
 * @n: input
 */
void print_array(int *a, int n)
{
	int var;

	for (var = 0; var < (n - 1); var++)
	{
		printf("%d, ", a[var]);
	}
	if (var == (n - 1))
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");
}
