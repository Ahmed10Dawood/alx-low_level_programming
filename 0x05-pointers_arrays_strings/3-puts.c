#include "main.h"

/**
 *  _puts - print string followed by a new line
 *
 * @str: input string
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
