#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory using malloc
 * @b: input
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *bb = (void *)malloc(b);

	if (bb == NULL)
	{
		exit(98);
	}

	return (bb);
}
