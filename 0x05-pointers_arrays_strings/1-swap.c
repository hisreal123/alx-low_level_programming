#include "main.h"
#include <stdio.h>
/**
 * swap_int - a fcuntion that swaps the values of two integers
 * @a: swap a to b
 * @b: swap b to a
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}

