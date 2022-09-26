#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: String which search character
 * @c: character to find
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);/* value null*/
}
