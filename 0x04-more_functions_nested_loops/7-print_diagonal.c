#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: number time should be printed
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn < n; postn++)
		{
			for (space = 1; space < postn; space++)
			{
				if (space == postn)
					_putchar('\\');
				else if (space < postn)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
