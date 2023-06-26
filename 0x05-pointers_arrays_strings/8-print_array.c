#include "main.h"

/**
 * print_array - print array
 *
 * @n: input parameter
 * @a: string input
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
