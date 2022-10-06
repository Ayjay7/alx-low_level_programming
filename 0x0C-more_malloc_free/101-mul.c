#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguements received
 * @argc: type int argument
 * @argv: type char arguement of string
 * Return: if not receive 2 arg, error
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
	exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 40)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) *atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
