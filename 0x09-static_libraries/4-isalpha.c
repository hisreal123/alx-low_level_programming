#include "main.h"
#include <ctype.h>
/**
*_isalpha - check if char is alphabet
*@c: is the char to be checked
*Return: 1 if char is alphabet, otherwise 0
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
