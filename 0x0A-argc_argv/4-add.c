#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - program that adds only positive numbers together
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 if no argument is passed or success
 *1 if argument is'nt a positive number
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;


	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

