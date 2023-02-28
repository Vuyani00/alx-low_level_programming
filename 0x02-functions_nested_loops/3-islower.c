#include "main.h"
#include <ctype.h>

/**
  *_islower - checks for lowercase letters
  *
  *@c: character
  *
  *Descrption: checks whether a character is lowercase/uppercase
  *
  *Return: 0 (Success)
  */

int _islower(int c)
{
	char i;
	int lower = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
