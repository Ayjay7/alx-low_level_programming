#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: old memory size
 * @new_size: new memory size
 * @ptr: ptr to memory space
 * Return: pointer to new sized memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cline, *relloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_siz == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc +i) = clone[i];
	}
	free(ptr);
	return (relloc);
}
