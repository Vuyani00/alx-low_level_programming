#include "main.h"

/**
 * _strcmp - is the entry point
 * @s1: is a pointer
 * @s2: is a pointer
 * Return: 0 if is success
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
