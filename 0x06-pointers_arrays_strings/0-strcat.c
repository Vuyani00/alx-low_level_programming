#include "main.h"

/**
  *_strcat - concatenates srings
  *@dest: variable
  *@src: variable
  *Description: concatenates two strings
  *Return: 0 (Success)
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
