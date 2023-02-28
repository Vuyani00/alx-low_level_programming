#include "main.h"

/**
  *print_sign - declares whether a number is +/-
  *
  *@n: input
  *
  *Descrption: prints 1 if + and 0 if -
  *
  *Return: 1 if positive and 0 if negative
  */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
