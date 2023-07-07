#include "main.h"

/**
 * *_strncpy - function that take two strings
 *
 * @dest: pointer to dest input
 * @src: pointer to src input
 * @n: most number
 *
 * Return: pointer to new string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
