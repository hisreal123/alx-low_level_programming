#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest:: destination
 * @src: source
 * @n: n byte
 * Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *nDest = dest;

	while (n--)
		*dest++  = *src++;
	return (nDest);
}
