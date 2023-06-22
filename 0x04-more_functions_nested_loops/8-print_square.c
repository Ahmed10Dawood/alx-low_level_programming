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
	int count = 0, start;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (start = 1; start < size; start++)
		{
			while (count < size)
			{
				_putchar('#');
				count++;
			}
			count = 0;
			_putchar('\n');
		}
	}
}
