#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != n)
	{
		dest = src;
	}

	dest[0] = '\0';
	return (dest);
}
