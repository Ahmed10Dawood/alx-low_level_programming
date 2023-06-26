#include "main.h"

/**
 * print_rev - print reverse string
 *
 * @s: pointer to reverse string
 *
 * Return: reverse string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		-putchar(s[i]);

	-putchar('\n');
}
