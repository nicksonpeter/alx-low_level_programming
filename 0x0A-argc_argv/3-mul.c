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
	int val = argc - 1;

	if (val != 2)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
