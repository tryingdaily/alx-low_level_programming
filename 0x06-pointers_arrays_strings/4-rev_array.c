#include "main.h"

/**
 * reverse_array - Reverses the content of an array of
 * integers.
 *
 * @a: input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}

