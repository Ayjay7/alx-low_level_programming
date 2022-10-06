#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, k;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	p = malloc((size1 + n 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (k = 0; k < size1; k++)
	{
		p[k] = s1[k];
	}

	for (; k < (size1 + n); k++)
	{
		p[i] = s2[k - size1];
	}
	p[k] = '\0';

	return (p);
}
