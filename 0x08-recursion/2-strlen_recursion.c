#include "main.h"
/**
 * _strlen_recursion - counts the lenght of string
 * @s: input
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int result = _strlen_recursion(s + 1) + 1;

		return (result);
	}
	return (0);
}
