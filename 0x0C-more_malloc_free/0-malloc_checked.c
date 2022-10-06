#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - if have error throw 98 error
 * @b: bytes
 * Return: pointer void
 */
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
