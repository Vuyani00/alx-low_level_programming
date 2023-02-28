#include "main.h"

/**
  *print_alphabet_x10 - prints the alphabet
  *
  *Description: Prints 10 lines of the alphabet in lowercase
  *
  *Return: 0 (Success)
  */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
