#include <stdio.h>
#include <stdlib.h>

/**
 * main - the next combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 48;
	int num2 = 48;
	
	while (num1 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if ( num1 == 56 && num2 == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
