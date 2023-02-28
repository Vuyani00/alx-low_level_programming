#include "main.h"

/**
  *_abs - makes an absolute value
  *
  *@n: input
  *
  *Description: creates the absolute value for any number
  *
  *Return: _abs(num) (Success)
  */

int _abs(int n)
{
	int num;

	if (n > 0)
	{
		num = n;
	}
	else if (n == 0)
	{
		num = 0;
	}
	else if (n < 0)
	{
		num = -1 * n;
	}

	return (num);
}
