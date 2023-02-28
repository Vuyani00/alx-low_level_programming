#include "main.h"

/**
  *jack_bauer - prints time
  *
  *Description: prints time from 00:00 - 23:59
  *
  *Return 0;
  */

void jack_bauer(void)
{
	int P, D;

	for (P = 0; P < 24; P++)
	{
		for (D = 0; D < 60; D++)
		{
			_putchar((P / 10) + '0');
			_putchar((P % 10) + '0');
			_putchar(':');
			_putchar((D / 10) + '0');
			_putchar((D % 10) + '0');
			_putchar('\n');
		}
	}
}
