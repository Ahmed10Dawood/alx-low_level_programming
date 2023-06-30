#include "main.h"
#include <stdio.h>

/**
 * isLower - convert from lower to capital
 *
 * @c: input for alphabet
 *
 * Return: 1 if upper, 0 if not
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - convert from lower to capital
 *
 * @c: input for alphabet
 *
 * Return: 1 if upper, 0 if not
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * *cap_string - convert from lower to capital
 *
 * @s: input for alphabet
 *
 * Return: string
*/

char *cap_string(char *s)
{
	int *ptr = s;
	char fd = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fd = 1;
		else if (isLower(*s) && fd)
		{
			*s -= 32;
			fd = 0;
		}
		else
			fd = 0;
		s++;
	}
	return (ptr);
}
