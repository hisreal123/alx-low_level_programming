#include "main.h"
#include <stdio.h>
/**
 *  _cP_number - funtion to check the divisor
 * @n: input
 * @divisor: input
 * Return: 1, and 0 otherwise.
 */

int _cP_number(int n, int divisor)
{
	if (divisor == 1)
		return (1);

	if ((n % divisor)  == 0)
		return (0);

	return (_cP_number(n, divisor - 1));

}

/**
 * is_prime_number - funtion
 * @n: input
 * Return: 1, and 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_cP_number(n, n / 2));
}
