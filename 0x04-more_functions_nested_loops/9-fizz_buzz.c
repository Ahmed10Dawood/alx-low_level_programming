#include "main.h"

/**
 * main - print 1 - 100
 *        numbers multiples of 3 print fizz
 *        numbers multiples of 5 print buzz
 *        numbers multiples of 3 and 5 print fizzbuzz
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int num = 1, end = 100;

	while (num <= 100)
	{
		if (num % 3 == 0)
			printf("fizz");
		if (num % 5 == 0)
			printf("Buzz");
		if (num % 3 != 0 && num % 5 != 0)
			printf("%d", num);

		putchar(num == end ? '\n' : ' ');
		num++;
	}

	return (0);
}
