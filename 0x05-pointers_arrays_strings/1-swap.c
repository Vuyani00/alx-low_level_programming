#include "main.h"

/**
  *swap_int - swaps two integers
  *@a: variable
  *@b: variable
  *Description: swaps the values of two integers
  *Return: 0 (Success)
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
