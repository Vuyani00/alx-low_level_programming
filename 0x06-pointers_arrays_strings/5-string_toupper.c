#include "main.h"

/**
 * string_toupper - is the entry point
 * @a: is a pointer array
 * Return: 0 if is success
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
