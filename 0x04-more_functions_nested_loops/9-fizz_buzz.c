#include <stdio.h>

/**
 * main - the real deal
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			if (num < 100)
			{
				printf("%s ", fizzbuzz);
			}
			else
			{
				printf("%s", fizzbuzz);
			}
		}
		else if (num % 5 == 0)
		{
			if (num < 100)
			{
				printf("%s ", buzz);
			}
			else
			{
				printf("%s", buzz);
			}
		}
		else if (num % 3 == 0)
		{
			if (num < 100)
			{
				printf("%s ", fizz);
			}
			else
			{
				printf("%s", fizz);
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
