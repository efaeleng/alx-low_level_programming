#include "main.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;

		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (i == 0)
		_putchar('\n');
}
