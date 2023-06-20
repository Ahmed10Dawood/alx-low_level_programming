#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcter to print
 *
 * Return: On success 1.
 *         On error, -1 is returned.
*/

int _putchar (char c)
{
	return (write(1, &c, 1));
}
