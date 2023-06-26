#include "main.h"

/**
 * *_strcpy - copy string to other
 *
 * @dest: char string
 * @src: char string
 *
 * Return: copy to dest
*/

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
