#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followedby a new line
 * but for multiples of three prints fizz intsead of number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	while (i++ < 100)

		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz ");

		else if ((i % 5) == 0)
		{
			if (i != 100)
				printf("Buzz ");

			else
				printf("Buzz ");
		}

		else
			printf("%d", i);

	printf("\n");
	return (0);
}
