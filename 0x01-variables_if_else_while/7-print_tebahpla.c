#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Function that prints the alphabet in reverse
  *
  *Return: always 0 (Success)
  */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		--letter;
	}

	putchar('\n');

	return (0);
}
