#include "main.h"
#include <stdio.h>

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
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(' ');
	}
	printf('\n');
	return (0);
}
