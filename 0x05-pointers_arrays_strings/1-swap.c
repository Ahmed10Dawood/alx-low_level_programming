#include "main.h"

/**
 * swap_int - swap the values of two integer
 *           using two input parameters
 *
 * @a: input parameter
 * @b: input parameter
 *
 * Return: nathing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
