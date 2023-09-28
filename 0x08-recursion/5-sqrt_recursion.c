#include "main.h"
/**
 * _aSqrt_recursion - function to check the natural root
 * @i: input
 * @n: input
 * Return: -1 otherwise.
 */

int _aSqrt_recursion(int n, int i)
	{
		if ((i * i) > n)
			return (-1);
		else if ((i * i) == n)
		{
			return (i);
		}

		return (_aSqrt_recursion(n, i + 1));
	}

/**
 * _sqrt_recursion - natural sqr of a number
 * @n: input
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);
	return (_aSqrt_recursion(n, 0));
}
