#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory
 * @char s: memory area to be filled with b
 * @char b: the constant byte to fill
 * @unsigned int n: the number byte to be filled with b
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
