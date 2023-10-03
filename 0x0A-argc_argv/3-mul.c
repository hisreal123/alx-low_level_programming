#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - converts a string to an integer
 * @argc: input
 * @argv: input
 * Return:  Error and 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc >= 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[argc - 1]);

		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
