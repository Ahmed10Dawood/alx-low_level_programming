#include "main.h"

/**
 * puts2 - print every charecter
 *
 * @str: input charecter
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
