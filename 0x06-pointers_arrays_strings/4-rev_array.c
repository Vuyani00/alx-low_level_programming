#include "main.h"

/**
 * reverse_array - is the entry point
 * @a: is a pointer array
 * @n: number of swaps
 * Return: 0 if success
 */

void reverse_array(int *a, int n)
{
	int i, temp;
	n--;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
