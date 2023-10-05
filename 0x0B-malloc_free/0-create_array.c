#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @c: input
 * @size: the size of the memory to print
 * Return: 0 || NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
