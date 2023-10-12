#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: input
 * @n: input
 * Return: 0 if n == 0
 *
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
va_start(args, n);

if (*separator != '\0')
for ( ; i < n; i++)
{
const char *letter = va_arg(args, const char *);
if (letter == NULL)
{
printf("(nil)");
}
else
{
printf("%s", letter);
}

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
