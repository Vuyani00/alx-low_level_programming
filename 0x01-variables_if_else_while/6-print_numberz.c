#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Printing the 1st 10 natural numbers with putchar
  *
  *Return: always 0 (Success)
  */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');

	return (0);
}
