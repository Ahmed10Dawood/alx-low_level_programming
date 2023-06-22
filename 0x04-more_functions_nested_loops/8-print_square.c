#include "main.h"

/**
 * print_square - print square
 *
 * @size: size of square
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
	int row, col = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row < size; row++)
		{
			while (col < size)
			{
				_putchar('#');
				col++;
			}
			count = 0;
			_putchar('\n');
		}
	}
}
