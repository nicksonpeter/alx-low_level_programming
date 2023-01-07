#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all agruments
 * @argc: length of argv array
 * @argv: contains atguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
