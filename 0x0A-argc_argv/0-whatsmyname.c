#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing its name
 * @argc: length of argv array
 * @argv: array containing arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	puts(argv[argc - 1]);
	return (0);
}
