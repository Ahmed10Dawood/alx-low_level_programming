#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name using pointer to function
 * @name: string to a
 * @f: pointer to function
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
