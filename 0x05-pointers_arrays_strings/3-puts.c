#include <stdio.h>
/**
 * _puts - a function that prints strings,
 * followed by a new line of code to the stdout
 * @str: pointer variable to type char
 * Returns : 0;
*/
void _puts(char *str)
{
	if (str)
	{
		printf("%s\n", str);
	}
}
