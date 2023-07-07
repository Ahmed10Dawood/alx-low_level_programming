#include "main.h"

/**
 * *_strncat - function that take two strings
 *
 * @dest: pointer to dest input
 * @src: pointer to src input
 * @n: most number
 *
 * Return: pointer to new string
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
