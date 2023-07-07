#include "main.h"

/**
 * _abs - function that compute absolute value
 *
 * @n: take input for function
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
