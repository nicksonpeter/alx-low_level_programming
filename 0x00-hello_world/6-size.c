#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int b1;
	long long int c;
	float d;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(b1));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a float: %ld byte(s)\n", sizeof(d));
	return (0);
}
