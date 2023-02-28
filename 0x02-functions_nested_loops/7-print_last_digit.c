#include "main.h"

/**
  *print_last_digit - prints the last digit of a number
  *
  *@n: input
  *
  *Description: prints the last digit of a given number
  *
  *Return: last digit (Success)
  */

int print_last_digit(int n)
{
	int num;
	int i = 0;

	while (i < 2)
	{
		if (n > 0)
		{
			num = n % 10;
		}
		else if (n == 0)
		{
			num = 0;
		}
		else if (n < 0)
		{
			num = n % 10;
		}
		i++;
	}

	return (num);
}

