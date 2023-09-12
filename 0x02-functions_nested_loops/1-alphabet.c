#include "main.h"
/**
*main -A programm that prints all alphabet in lowercase
* followed by a new line
*
* Return: 0.
*/
void print_alphabet(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		_putchar(letter);
		_putchar('\n');
		letter++;
	}
}
