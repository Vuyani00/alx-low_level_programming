#include "main.h"

/**
  *times_table - prints times table
  *
  *Description: prints the times table for numbers 0-9
  *
  *Return: 0
  */

void times_table(void)
{
	int i = 0;
	int num = 0;
	int value;

	while (i < 10)
	{
		while (num < 10)
		{
			value = num * i;
			if (value <= 9 && num != 0)
			{
				_putchar(' ');
				if (value > 9)
				{
					_putchar(value / 10 + '0');
					_putchar(value % 10 + '0');
				}else 
				{
					_putchar(value + '0');
				}
				if (num != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				num++;
			}
		}
		i++;
	}
}
