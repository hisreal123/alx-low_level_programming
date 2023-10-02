#include <string.h>
#include "main.h"
/**
* _strcat - concatenates two strings
* @dest : input value
* @src : input value
* Return: void
*/
char *_strcat(char *dest, char *src)
{
	char *saver = dest;

	while (*saver != '\0')
	{
		saver++;
	}

	while (*src != '\0')
	{
		*saver = *src;
		saver++;
		src++;
	}

	return (dest);
}

