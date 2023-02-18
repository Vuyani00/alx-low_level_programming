#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Function that prints alphabet in lowercase except q & e
  *
  *Return: always 0 (Success)
  */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z';)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
			++letter;
		}
	}

	putchar('\n');

	return (0);
}
