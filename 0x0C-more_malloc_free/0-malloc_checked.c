#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
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
