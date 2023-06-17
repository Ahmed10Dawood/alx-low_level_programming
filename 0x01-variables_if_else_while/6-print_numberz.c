#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print 0-9 with putchar
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;
	}
	putchar('\n');

	return (0);
}
