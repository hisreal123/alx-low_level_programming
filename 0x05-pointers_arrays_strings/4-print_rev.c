#include "main.h"

/**
 * print_rev - prints a string inreverse
 * @s: pointer to be reversed
 * Return: Always 0.
 */

void print_rev(char *s)
{
    char tmp;
    int lenght = strlen(s);
    int start = 0;
    int end = lenght - 1;

    while (start < end)
    {
        tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;

        start++;
        end--;
    }
}