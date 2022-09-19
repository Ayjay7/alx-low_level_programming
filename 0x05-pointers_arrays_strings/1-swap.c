#include "main.h"

/**
 * swap_int - function that swaps the valuesof two integers.
 * @a: this is first entry
 * @b: this is second entry
 *
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}

