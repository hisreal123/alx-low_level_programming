#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all values
 * @n: input
 * Return: 0 if n == 0
 *
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, total = 0;

va_start(ap, n);
if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
{
total += va_arg(ap, int);
}
va_end(ap);
return (total);
}
