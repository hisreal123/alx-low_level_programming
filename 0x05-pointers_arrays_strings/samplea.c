#include "main.h"
#include <string.h>
/**
 * _strlen - a function returns the length of a string and checks
 * for \0 if it exists in the code.
 * @s: string variable
 * Return: length
 */
int _strlen(char *s)
{
        if (s)
        {
                size_t len = strlen(s);

                return (len);
        }

        return (0);
}

