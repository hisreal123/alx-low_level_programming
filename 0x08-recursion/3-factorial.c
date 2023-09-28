#include "main.h"
#include <stdio.h>

/**
 * factorial - a factorial recursive function
 * @n: input
 * Return: Always 1 if n is 0.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	}

	n = n * factorial(n - 1);
	return (n);
}
