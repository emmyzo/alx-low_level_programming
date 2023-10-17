#include "main.h"

/**
 * swap_int - function name
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
