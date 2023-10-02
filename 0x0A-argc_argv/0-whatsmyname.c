#include <stdio.h>
/**
 * main - function
 * @argc: input
 * @argv: input
 * Return: Always 0;
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
		printf("%s\n", argv[0]);
	}

	return (0);
}
