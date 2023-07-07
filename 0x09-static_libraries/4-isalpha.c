#include "main.h"

/**
 * _isalpha - check if character lower or upper
 *
 * @c: take input from orher function
 *
 * Return: 1 if c is true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

