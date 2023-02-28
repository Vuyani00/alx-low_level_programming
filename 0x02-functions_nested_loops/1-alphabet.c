#include "main.h"

/**
  *print_alphabet - prints alphabet
  *
  *Description: Function that prints the alphabet in lowercase
  *
  *Return: 0 (Success)
  */

void print_alphabet(void)
{
	char alpha = 'a';
	char omega = 'z';

	while (alpha <= omega)
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');

}
