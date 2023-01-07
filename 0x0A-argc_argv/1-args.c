#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing number of arguments
 * @argc: length of argv array
 * @argv: contains number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
