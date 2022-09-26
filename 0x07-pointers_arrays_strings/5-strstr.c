#include "main.h"
#include <stdio.h>
/**
 * _strstr - find substring in string
 * @haystack: where find
 * @needle: to find
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variable*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
