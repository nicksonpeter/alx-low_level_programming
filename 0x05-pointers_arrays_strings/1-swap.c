#include "main.h"

/**
 * swap_int - swaping two integers values
 * @a: input values
 * @b: another input value
 * return: success value
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
