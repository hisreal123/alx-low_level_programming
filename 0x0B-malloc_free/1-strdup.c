#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function that returns a pointer
 * @str: input
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	size_t len;
	char *strcp;

	if (str == NULL)
		return (NULL);

	len  = strlen(str) + 1;

	strcp = (char *)malloc(sizeof(char) * len);

	if (strcp == NULL)
		return (NULL);

	strcpy(strcp, str);
	return (strcp);
}
