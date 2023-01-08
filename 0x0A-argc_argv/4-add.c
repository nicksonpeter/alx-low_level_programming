#include <stdio.h>
#include <stdlib.h>

/**
 * isNumber - checking agruments if number
 * @str: contains atguments
 * Return: 1
 */
int isNumber(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - prints all agruments
 * @argc: length of argv array
 * @argv: contains atguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int var = 0, count = 1;

	while (count < argc)
	{
		if (isNumber(argv[count]) == 0)
		{
			puts("Error");
			return (1);
		}
		var += atoi(argv[count]);
		count++;
	}
	printf("%d\n", var);
	return (0);
}
